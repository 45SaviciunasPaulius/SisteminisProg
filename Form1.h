#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pavardė:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 22);
			this->textBox2->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->apieToolStripMenuItem, this->uždarytiToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(873, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveToolStripMenuItem,
					this->openToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			this->saveToolStripMenuItem->Text = L"Save as";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::apieToolStripMenuItem_Click);
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uždarytiToolStripMenuItem_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(106, 135);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(240, 100);
			this->listBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Priskirti pažymi:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(106, 101);
			this->comboBox1->MaxDropDownItems = 10;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(55, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(166, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 34);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Pridėti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 34);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Pašalinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Egzamino rez. :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(106, 241);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(240, 22);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Pažymiai:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(106, 268);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(240, 31);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Pridėti studentą";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(352, 268);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 31);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Išsaugoti kaip";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(352, 39);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(209, 228);
			this->listBox2->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(567, 39);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->Size = System::Drawing::Size(288, 228);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"Petras Petraitis 10 9 7 8 5 4 6\r\nJonas Jonaitis 8 4 5 2 1 6 9 8\r\nPaulius Savičiūn"
				L"as 8 7 5 6 4 10 5\r\nMarytė Marytė 7 7 7 8 9 5 4 10\r\n";
			this->textBox4->WordWrap = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(567, 268);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(124, 31);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Atidaryti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(692, 299);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(163, 31);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Apskaičiuoti";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(697, 273);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 20);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(779, 273);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 20);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(465, 268);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 31);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Išvalyti visus";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(873, 347);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double Galutinis(vector<double> _paz, int egz) {
			double sum = 0;
			double Vid, Galu;
			for (int i = 0; i < _paz.size(); i++) {
				sum += _paz[i];
			}

			Vid = sum / _paz.size();
			Galu = 0.4 * Vid + 0.6 * egz;
			return Galu;
		}

		double Mediana(vector<double> _paz, int egz) {
			_paz.push_back(egz);
			for (int i = 0; i < _paz.size(); i++) {
				for (int j = i + 1; j < _paz.size(); j++) {
					if (_paz[i] > _paz[j]) {
						int a = _paz[j];
						_paz[j] = _paz[i];
						_paz[i] = a;
					}
				}
			}
			double a;
			if ((_paz.size() / 2) % 2 != 0)a = _paz[_paz.size() / 2];
			else {
				a = ((_paz[_paz.size() / 2]) + ((_paz[_paz.size() / 2]) - 1)) / 2;
			}


			return a;

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Add(comboBox1->SelectedItem);
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->SelectedIndex = 0;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Remove(listBox1->SelectedItem);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			vector<double> pazymiai;
			int Egz = System::Convert::ToInt32(textBox3->Text);
			if (Egz > 10 || Egz < 1) {
				throw(Egz);
			}

			for (int i = 0; i < listBox1->Items->Count;i++) {
				pazymiai.push_back(System::Convert::ToDouble(listBox1->GetItemText(listBox1->Items[i])));
			}


			textBox4->Text += (textBox1->Text + " " + textBox2->Text);
			for (int i = 0;i < pazymiai.size();i++) {
				textBox4->Text += " " + pazymiai[i];
			}
			textBox4->Text += " " + Egz+"\r\n";
		}
		catch (System::Exception^ e) {
			MessageBox::Show("Ivesties klaida!", "Klaida",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
		
	};


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Text Files|*.txt";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);

		for (int i = 0; i < listBox2->Items->Count;i++) {
			writer->WriteLine(listBox2->Items[i]);
		}

		writer->Close();

		MessageBox::Show("Failas Sekmingai išsaugotas", "Atlikta");
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	openFileDialog1->Title = "Open a Text File"; 

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog1->FileName);

		textBox4->Text = reader->ReadToEnd();

		reader->Close();
		MessageBox::Show("Failas sėkmingai atidarytas!", "Atlikta");
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	array<System::String^>^ lines = textBox4->Lines;
	vector<double> paz;
	System::String^ trimmedLine;

		for each (System::String ^ line in lines) {
			paz.clear();
			trimmedLine = line->Trim();

			try {

				if (trimmedLine->Length > 0) {
					array<System::String^>^ words = trimmedLine->Split(gcnew array<wchar_t>{' '}, StringSplitOptions::RemoveEmptyEntries);
					int egz = System::Convert::ToInt16(words[words->Length - 1]);

					for (int i = 2; i < words->Length - 2; i++) {
						paz.push_back(System::Convert::ToDouble(words[i]));
					}

					if (radioButton1->Checked) {
						listBox2->Items->Add(
							words[0] + " " + words[1] + " " + System::String::Format("{0:F2}", Galutinis(paz, egz))
						);
					}
					else if (radioButton2->Checked) {
						listBox2->Items->Add(
							words[0] + " " + words[1] + " " + System::String::Format("{0:F2}", Mediana(paz, egz))
						);
					}


				}
			}
			catch (System::Exception^ e) {
				continue;
		}
	}
}


private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button4_Click(sender, e);
}
private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Programa buvo sukurta: Pauliaus Savičiūno\n Sukurta pagal Nr.2 Savarankiško darbo nurodymus.\n 2024-12-08","Info",MessageBoxButtons::OK,MessageBoxIcon::Information);
}

private: System::Void uždarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Ar tikrai norite uždaryti programa?", "Uždarymas", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		this->Close();
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button5_Click(sender, e);
}
};
}

