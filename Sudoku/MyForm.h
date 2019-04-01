#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <string>

#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>

#define GRID_FULL std::make_pair(9, 9)

namespace Sudoku {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;





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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Location = System::Drawing::Point(623, 504);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(198, 54);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Сложность";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Легкая", L"Средняя", L"Сложная", L"Эксперт" });
			this->comboBox1->Location = System::Drawing::Point(7, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Gray;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->RowTemplate->Height = 67;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(605, 605);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(724, 564);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(623, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Сделал Артем Герасимов";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(623, 564);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(724, 594);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"О программе";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(623, 594);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Сгенерировать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 630);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Sudoku";
			this->Load += gcnew System::EventHandler(this, &MyForm::Form1_Activated);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Activated(System::Object^ sender, System::EventArgs^ e)
	{
		int size = 9;

		int **mass = new int *[size];
		for (int i = 0; i < size; i++) {
			mass[i] = new int[size];
		}

		dataGridView1->ColumnCount = size;
		dataGridView1->RowCount = size;

		dataGridView1->RowHeadersVisible = false;
		dataGridView1->ColumnHeadersVisible = false;

		for (int i = 0; i < size; i++) {
			dataGridView1->Columns[i]->Width = 67;
		}

		for (int i = 0; i < 9; i++)
		{
			delete[] mass[i];
		}
		delete[] mass;
	}
	private: bool used_in_row(int grid[9][9], int row, int num)
	{
		for (int col = 0; col < 9; col++)
			if (grid[row][col] == num)
			{
				return true;
			}
		return false;
	}
	private: bool used_in_col(int grid[9][9], int col, int num)
	{
		for (int row = 0; row < 9; row++)
			if (grid[row][col] == num)
			{
				return true;
			}
		return false;
	}
	private: bool used_in_box(int grid[9][9], int box_start_rpw, int box_start_col, int num)
	{
		for (int row = 0; row < 3; row++)
			for (int col = 0; col < 3; col++)
				if (grid[row + box_start_rpw][col + box_start_col] == num)
				{
					return true;
				}
		return false;
	}
	private: bool is_safe(int grid[9][9], int row, int col, int num)
	{
		return !used_in_row(grid, row, num) &&
			!used_in_col(grid, col, num) &&
			!used_in_box(grid, row - row % 3, col - col % 3, num);
	}
	private: std::pair <int, int> get_unassigned_location(int grid[9][9])
	{
		for (int row = 0; row < 9; row++)
			for (int col = 0; col < 9; col++)
				if (grid[row][col] == 0)
				{
					return std::make_pair(row, col);
				}
		return GRID_FULL;
	}
	private: bool solve_soduko(int grid[9][9])
	{
		if (GRID_FULL == get_unassigned_location(grid))
		{
			return true;
		}

		std::pair<int, int> row_and_col = get_unassigned_location(grid);
		int row = row_and_col.first;
		int col = row_and_col.second;

		for (int num = 1; num <= 9; num++)
		{
			if (is_safe(grid, row, col, num))
			{
				grid[row][col] = num;

				if (solve_soduko(grid))
				{
					return true;
				}

				grid[row][col] = 0;
			}
		}
		return false;
	}
	private: int randomnum(int l) {
		return rand() % l;
	}
	private: void trans(int grid[9][9]) {
		int tmp;
		for (int i = 0; i < 9; i++)
		{
			for (int j = i; j < 9; j++)
			{
				tmp = grid[i][j];
				grid[i][j] = grid[j][i];
				grid[j][i] = tmp;
			}
		}
	}
	private: void swap_rows_small(int grid[9][9]) {
		int tmp;
		int a, b;
		a = randomnum(9);
		do {
			b = a - a % 3 + randomnum(3);
		} while (b == a);
		for (int i = 0; i < 9; i++) {
			tmp = grid[i][a];
			grid[i][a] = grid[i][b];
			grid[i][b] = tmp;
		}
	}
	private: void swap_columns_small(int grid[9][9]) {
		int tmp;
		int a, b;
		a = randomnum(9);
		do {
			b = a - a % 3 + randomnum(3);
		} while (b == a);
		for (int i = 0; i < 9; i++) {
			tmp = grid[a][i];
			grid[a][i] = grid[b][i];
			grid[b][i] = tmp;
		}
	}
	private: void swap_rows_area(int grid[9][9]) {
		int tmp;
		int b;
		int a = randomnum(3);
		do {
			b = randomnum(3);
		} while (b == a);
		for (int i = a * 3, j = b * 3; i < a * 3 + 3; i++) {
			for (int d = 0; d < 9; d++) {
				tmp = grid[i][d];
				grid[i][d] = grid[j][d];
				grid[j][d] = tmp;
			}
			j++;
		}
	}
	private: void swap_columns_area(int grid[9][9]) {
		int tmp;
		int b;
		int a = randomnum(3);
		do {
			b = randomnum(3);
		} while (b == a);
		for (int i = a * 3, j = b * 3; i < a * 3 + 3; i++) {
			for (int d = 0; d < 9; d++) {
				tmp = grid[d][i];
				grid[d][i] = grid[d][j];
				grid[d][j] = tmp;
			}
			j++;
		}
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Программу придумал и написал Артем Герасимов \nОна предназначена для генерирования и решения судоку", "О программе");
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				dataGridView1->Rows[j]->Cells[i]->Value = "";
			}
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		const int size = 9;
		int grid[size][size] = {{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0},
								{0,0,0,0,0,0,0,0,0}};
		int checker = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "" || Convert::ToChar(dataGridView1->Rows[i]->Cells[j]->Value) == '0') {
					grid[i][j] = 0;
					checker++;
				}
				else {
					if (Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) >= 1 && Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) <= 9) {
						grid[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}
			}
		}

		if (checker == 0) {
			MessageBox::Show("Судоку и так решено", "Ошибка");
		}
		else if (solve_soduko(grid) && checker > 0) {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = grid[i][j];
				}
			}
		}
		else {
			MessageBox::Show("Не существует решения данного судоку", "Ошибка");
		}


	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		try {
			System::Int32^ Int32;
			//Пробуем сконвертировать значение ячейки в System::Int32
			Int32 = System::Convert::ToInt32(this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
			System::Char^ Char;
			Char = System::Convert::ToChar(this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
		}
		catch (Exception^ ex) {
			//Если при конвертировании возникает ошибка - показываем окно ошибки и стираем значение ячейки
			MessageBox::Show("Пожалуйста, введите числа от 0 до 9", "Ошибка");
			dataGridView1->CurrentCell->Value = "";
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->PerformClick();
		srand(static_cast<unsigned int>(time(0)));
		int grid[9][9] =   {{8,6,5,3,1,9,7,4,2},
							{3,2,4,6,8,7,5,1,9},
							{7,1,9,4,5,2,3,6,8},
							{4,5,1,9,6,3,8,2,7},
							{9,7,2,8,4,1,6,3,5},
							{6,8,3,7,2,5,1,9,4},
							{1,4,7,5,9,6,2,8,3},
							{2,3,8,1,7,4,9,5,6},
							{5,9,6,2,3,8,4,7,1}};
		int count = randomnum(5000) + 10000;
		for (int i = 0; i < count; i++) {
			int cho = randomnum(5);
			switch (cho) {
			case 5:
				trans(grid);
				break;
			case 4:
				swap_rows_small(grid);
				break;
			case 3:
				swap_columns_small(grid);
				break;
			case 2:
				swap_rows_area(grid);
				break;
			case 1:
				swap_columns_area(grid);
				break;
			}
		}
		int diff = comboBox1->SelectedIndex;
		int cal = 0;
		switch (diff) {
		case 0:
			cal = 30 + randomnum(6);
			break;
		case 1:
			cal = 25 + randomnum(6);
			break;
		case 2:
			cal = 20 + randomnum(6);
			break;
		case 3:
			cal = 18;
			break;
		}
		int a = randomnum(9);
		int b = randomnum(9);
		for (int i = 81; i > cal; i--) {
			if (grid[a][b] != 0) {
				grid[a][b] = 0;
			}
			else {
				i++;
			}
			a = randomnum(9);
			b = randomnum(9);
		}
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (grid[i][j] == 0) {
					dataGridView1->Rows[i]->Cells[j]->Value = "";
				}
				else {
					dataGridView1->Rows[i]->Cells[j]->Value = grid[i][j];
				}
			}
		}
	}
	};
}