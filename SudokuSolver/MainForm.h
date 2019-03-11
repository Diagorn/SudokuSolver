#pragma once
#include "Sudoku.h"
#include "Row.h"
#include "Column.h"
#include "Square.h"
namespace SudokuSolver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  SudokuFrame;
	private: System::Windows::Forms::Label^  lblHello;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  btnSolve;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->SudokuFrame = (gcnew System::Windows::Forms::DataGridView());
			this->lblHello = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnSolve = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SudokuFrame))->BeginInit();
			this->SuspendLayout();
			// 
			// SudokuFrame
			// 
			this->SudokuFrame->AllowUserToResizeColumns = false;
			this->SudokuFrame->AllowUserToResizeRows = false;
			this->SudokuFrame->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->SudokuFrame->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->SudokuFrame->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->SudokuFrame->DefaultCellStyle = dataGridViewCellStyle2;
			this->SudokuFrame->Location = System::Drawing::Point(15, 40);
			this->SudokuFrame->Name = L"SudokuFrame";
			this->SudokuFrame->RowHeadersVisible = false;
			this->SudokuFrame->RowHeadersWidth = 20;
			this->SudokuFrame->RowTemplate->Height = 30;
			this->SudokuFrame->Size = System::Drawing::Size(383, 275);
			this->SudokuFrame->TabIndex = 0;
			this->SudokuFrame->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::SudokuFrame_CellEndEdit);
			// 
			// lblHello
			// 
			this->lblHello->AutoSize = true;
			this->lblHello->Location = System::Drawing::Point(12, 13);
			this->lblHello->Name = L"lblHello";
			this->lblHello->Size = System::Drawing::Size(118, 13);
			this->lblHello->TabIndex = 1;
			this->lblHello->Text = L"Введите судоку сюда:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(136, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 275);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(261, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 275);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(15, 131);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(383, 10);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(15, 220);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(383, 10);
			this->panel4->TabIndex = 5;
			// 
			// btnSolve
			// 
			this->btnSolve->Location = System::Drawing::Point(154, 321);
			this->btnSolve->Name = L"btnSolve";
			this->btnSolve->Size = System::Drawing::Size(94, 31);
			this->btnSolve->TabIndex = 6;
			this->btnSolve->Text = L"Решить";
			this->btnSolve->UseVisualStyleBackColor = true;
			this->btnSolve->Click += gcnew System::EventHandler(this, &MainForm::btnSolve_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 354);
			this->Controls->Add(this->btnSolve);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblHello);
			this->Controls->Add(this->SudokuFrame);
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Судоку";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SudokuFrame))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//Set the number of cells containing Sudoku
		SudokuFrame->RowCount = 9;
		SudokuFrame->ColumnCount = 9;
		//SudokuFrame->AutoSizeColumnsMode = Fill;
		
	}
	private: System::Void SudokuFrame_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			//Check if the selected cell value is OK
		bool OkStatus = false;
		for (int i = 1; i < 10; ++i) {
			if (System::Convert::ToString(SudokuFrame->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value) == System::Convert::ToString(i)) {
					OkStatus = true;
					break;
				}
		}
		if (!OkStatus) {
			MessageBox::Show("Вы ввели неверное значение!");
			SudokuFrame[e->ColumnIndex, e->RowIndex]->Value = "";
		}
	
	}
private: System::Void btnSolve_Click(System::Object^  sender, System::EventArgs^  e) {
	Sudoku* main = new Sudoku();
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if(SudokuFrame[i, j]->Value != "")
				main->fill(i, j, System::Convert::ToInt16(SudokuFrame[i, j]->Value));
		}
	}
	Row* firstRow = new Row(0, main);
	Row* secondRow = new Row(1, main);
	Row* thirdRow = new Row(2, main);
	Row* fourthRow = new Row(3, main);
	Row* fifthRow = new Row(4, main);
	Row* sixthRow = new Row(5, main);
	Row* seventhRow = new Row(6, main);
	Row* eighthRow = new Row(7, main);
	Row* ninethRow = new Row(8, main);
	//All rows are created
	Column* firstColumn = new Column(0, main);
	Column* secondColumn = new Column(1, main);
	Column* thirdColumn = new Column(2, main);
	Column* fourthColumn = new Column(3, main);
	Column* fifthColumn = new Column(4, main);
	Column* sixthColumn = new Column(5, main);
	Column* seventhColumn = new Column(6, main);
	Column* eighthColumn = new Column(7, main);
	Column* ninethColumn = new Column(8, main);
	//All columns are created
	Square* firstSquare = new Square(0, 0, main);
	Square* secondSquare = new Square(0, 3, main);
	Square* thirdSquare = new Square(0, 6, main);
	Square* fourthSquare = new Square(3, 0, main);
	Square* fifthSquare = new Square(3, 3, main);
	Square* sixthSquare = new Square(3, 6, main);
	Square* seventhSquare = new Square(6, 0, main);
	Square* eighthSquare = new Square(6, 3, main);
	Square* ninethSquare = new Square(6, 6, main);
	//All squares are created
	//Beginning of the main algorythm
	while (!main->isSolved) {
		for (int i = 0; i < 9; ++i) {
			//Дописать и понять, что использовать - vector или list или простой массив
		}
	}
	
	main->~Sudoku(); //Sudoku deleted
	firstRow->~Row();
	secondRow->~Row();
	thirdRow->~Row();
	fourthRow->~Row();
	fifthRow->~Row();
	sixthRow->~Row();
	seventhRow->~Row();
	eighthRow->~Row();
	ninethRow->~Row();
	//All Rows deleted
	firstColumn->~Column();
	secondColumn->~Column();
	thirdColumn->~Column();
	fourthColumn->~Column();
	fifthColumn->~Column();
	sixthColumn->~Column();
	seventhColumn->~Column();
	eighthColumn->~Column();
	ninethColumn->~Column();
	//All Columns deleted
	firstSquare->~Square();
	secondSquare->~Square();
	thirdSquare->~Square();
	fourthSquare->~Square();
	fifthSquare->~Square();
	sixthSquare->~Square();
	seventhSquare->~Square();
	eighthSquare->~Square();
	ninethSquare->~Square();
	//All Squares deleted
}
};
}