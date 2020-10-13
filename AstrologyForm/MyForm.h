#pragma once

namespace AstrologyForm {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ text2;
	private: System::Windows::Forms::TextBox^ text3;
	private: System::Windows::Forms::TextBox^ text4;
	private: System::Windows::Forms::TextBox^ text5;
	private: System::Windows::Forms::TextBox^ text6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ result;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ text7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ text8;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Label^ labelTest;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label18;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text2 = (gcnew System::Windows::Forms::TextBox());
			this->text3 = (gcnew System::Windows::Forms::TextBox());
			this->text4 = (gcnew System::Windows::Forms::TextBox());
			this->text5 = (gcnew System::Windows::Forms::TextBox());
			this->text6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->text7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->text8 = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->labelTest = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(456, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Расчет по формуле A + B - C";
			// 
			// text1
			// 
			this->text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text1->Location = System::Drawing::Point(28, 92);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(72, 31);
			this->text1->TabIndex = 1;
			this->text1->TextChanged += gcnew System::EventHandler(this, &MyForm::text1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(209, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 25);
			this->label2->TabIndex = 34;
			this->label2->Text = L"+";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(651, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"-";
			// 
			// text2
			// 
			this->text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text2->Location = System::Drawing::Point(125, 92);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(72, 31);
			this->text2->TabIndex = 2;
			this->text2->TextChanged += gcnew System::EventHandler(this, &MyForm::text2_TextChanged);
			// 
			// text3
			// 
			this->text3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text3->Location = System::Drawing::Point(352, 92);
			this->text3->Name = L"text3";
			this->text3->Size = System::Drawing::Size(72, 31);
			this->text3->TabIndex = 4;
			this->text3->TextChanged += gcnew System::EventHandler(this, &MyForm::text3_TextChanged);
			// 
			// text4
			// 
			this->text4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text4->Location = System::Drawing::Point(449, 92);
			this->text4->Name = L"text4";
			this->text4->Size = System::Drawing::Size(72, 31);
			this->text4->TabIndex = 5;
			this->text4->TextChanged += gcnew System::EventHandler(this, &MyForm::text4_TextChanged);
			// 
			// text5
			// 
			this->text5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text5->Location = System::Drawing::Point(676, 92);
			this->text5->Name = L"text5";
			this->text5->Size = System::Drawing::Size(72, 31);
			this->text5->TabIndex = 7;
			this->text5->TextChanged += gcnew System::EventHandler(this, &MyForm::text5_TextChanged);
			// 
			// text6
			// 
			this->text6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text6->Location = System::Drawing::Point(773, 92);
			this->text6->Name = L"text6";
			this->text6->Size = System::Drawing::Size(72, 31);
			this->text6->TabIndex = 8;
			this->text6->TextChanged += gcnew System::EventHandler(this, &MyForm::text6_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(978, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"=";
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(461, 182);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(128, 38);
			this->result->TabIndex = 10;
			this->result->Text = L"Посчитать";
			this->result->UseVisualStyleBackColor = true;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(106, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"о";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(430, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"о";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(203, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(9, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"\'";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(527, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(9, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"\'";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(754, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"о";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(851, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(9, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"\'";
			// 
			// text7
			// 
			this->text7->BackColor = System::Drawing::SystemColors::Window;
			this->text7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text7->Location = System::Drawing::Point(1008, 92);
			this->text7->Name = L"text7";
			this->text7->Size = System::Drawing::Size(72, 31);
			this->text7->TabIndex = 9;
			this->text7->TextChanged += gcnew System::EventHandler(this, &MyForm::text7_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1083, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"о";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1180, 89);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(9, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"\'";
			// 
			// text8
			// 
			this->text8->BackColor = System::Drawing::SystemColors::Window;
			this->text8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text8->Location = System::Drawing::Point(1102, 92);
			this->text8->Name = L"text8";
			this->text8->Size = System::Drawing::Size(72, 31);
			this->text8->TabIndex = 10;
			this->text8->TextChanged += gcnew System::EventHandler(this, &MyForm::text8_TextChanged);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(629, 182);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(128, 38);
			this->buttonClear->TabIndex = 22;
			this->buttonClear->Text = L"Очистить";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// labelTest
			// 
			this->labelTest->AutoSize = true;
			this->labelTest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTest->Location = System::Drawing::Point(651, 113);
			this->labelTest->Name = L"labelTest";
			this->labelTest->Size = System::Drawing::Size(0, 25);
			this->labelTest->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(322, 95);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 25);
			this->label13->TabIndex = 24;
			this->label13->Text = L"+";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(317, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"о";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(239, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 31);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(640, 89);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 29;
			this->label15->Text = L"о";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(562, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 31);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(532, 95);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 25);
			this->label16->TabIndex = 27;
			this->label16->Text = L"+";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(960, 86);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"о";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(882, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(72, 31);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(857, 95);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 25);
			this->label18->TabIndex = 30;
			this->label18->Text = L"-";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 262);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->labelTest);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->text8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->text7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->text6);
			this->Controls->Add(this->text5);
			this->Controls->Add(this->text4);
			this->Controls->Add(this->text3);
			this->Controls->Add(this->text2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Формула";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text2_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text3_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text4_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text5_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text6_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text7_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void text8_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
