#pragma once
#include <cstdlib>
#include <ctime>
namespace F74045076 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int keycountmain = 1;
	int score_text = 0;
	int timecountdown = 31;
	int pnlcount = 1;
	int keycountpause = 1;
	int keycountscore = 1;
	int ready = 6;

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
	private: System::Windows::Forms::PictureBox^  titlepicture;
	private: System::Windows::Forms::Label^  lblStart;

	private: System::Windows::Forms::Label^  lblExit;
	private: System::Windows::Forms::Panel^  pnlMain;
	private: System::Windows::Forms::Panel^  pnlPlay;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblScore;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblTime;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  New;
	private: System::Windows::Forms::Timer^  speed;
	private: System::Windows::Forms::Timer^  countdown;
	private: System::Windows::Forms::Panel^  pnlscore;

	private: System::Windows::Forms::Label^  lblFinalScore;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblrestart;
	private: System::Windows::Forms::Label^  lblExit2;
	private: System::Windows::Forms::Label^  lblselect;
	private: System::Windows::Forms::Timer^  tmrSelect;
	private: System::Windows::Forms::Timer^  changeColor;
	private: System::Windows::Forms::Label^  lblPause;
	private: System::Windows::Forms::Panel^  pnlPause;
	private: System::Windows::Forms::Label^  lblPauseExit;
	private: System::Windows::Forms::Label^  lblPauseRestart;
	private: System::Windows::Forms::Label^  lblPauseContinue;
	private: System::Windows::Forms::Label^  lblReady;
	private: System::Windows::Forms::Timer^  Ready;






	private: System::ComponentModel::IContainer^  components;
	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->titlepicture = (gcnew System::Windows::Forms::PictureBox());
			this->lblStart = (gcnew System::Windows::Forms::Label());
			this->lblExit = (gcnew System::Windows::Forms::Label());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->lblselect = (gcnew System::Windows::Forms::Label());
			this->pnlPlay = (gcnew System::Windows::Forms::Panel());
			this->lblReady = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblPause = (gcnew System::Windows::Forms::Label());
			this->lblScore = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->New = (gcnew System::Windows::Forms::Timer(this->components));
			this->speed = (gcnew System::Windows::Forms::Timer(this->components));
			this->countdown = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlscore = (gcnew System::Windows::Forms::Panel());
			this->lblrestart = (gcnew System::Windows::Forms::Label());
			this->lblExit2 = (gcnew System::Windows::Forms::Label());
			this->lblFinalScore = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tmrSelect = (gcnew System::Windows::Forms::Timer(this->components));
			this->changeColor = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlPause = (gcnew System::Windows::Forms::Panel());
			this->lblPauseExit = (gcnew System::Windows::Forms::Label());
			this->lblPauseRestart = (gcnew System::Windows::Forms::Label());
			this->lblPauseContinue = (gcnew System::Windows::Forms::Label());
			this->Ready = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->titlepicture))->BeginInit();
			this->pnlMain->SuspendLayout();
			this->pnlPlay->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlscore->SuspendLayout();
			this->pnlPause->SuspendLayout();
			this->SuspendLayout();
			// 
			// titlepicture
			// 
			this->titlepicture->BackColor = System::Drawing::Color::Transparent;
			this->titlepicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"titlepicture.Image")));
			this->titlepicture->Location = System::Drawing::Point(177, 51);
			this->titlepicture->Name = L"titlepicture";
			this->titlepicture->Size = System::Drawing::Size(646, 90);
			this->titlepicture->TabIndex = 0;
			this->titlepicture->TabStop = false;
			this->titlepicture->Click += gcnew System::EventHandler(this, &Form1::titlepicture_Click);
			// 
			// lblStart
			// 
			this->lblStart->AutoSize = true;
			this->lblStart->BackColor = System::Drawing::Color::Transparent;
			this->lblStart->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStart->ForeColor = System::Drawing::Color::White;
			this->lblStart->Location = System::Drawing::Point(400, 238);
			this->lblStart->Name = L"lblStart";
			this->lblStart->Size = System::Drawing::Size(200, 51);
			this->lblStart->TabIndex = 1;
			this->lblStart->Text = L"Start";
			this->lblStart->Click += gcnew System::EventHandler(this, &Form1::lblStart_Click);
			// 
			// lblExit
			// 
			this->lblExit->AutoSize = true;
			this->lblExit->BackColor = System::Drawing::Color::Transparent;
			this->lblExit->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExit->ForeColor = System::Drawing::Color::White;
			this->lblExit->Location = System::Drawing::Point(421, 301);
			this->lblExit->Name = L"lblExit";
			this->lblExit->Size = System::Drawing::Size(148, 51);
			this->lblExit->TabIndex = 2;
			this->lblExit->Text = L"Exit";
			this->lblExit->Click += gcnew System::EventHandler(this, &Form1::lblExit_Click);
			// 
			// pnlMain
			// 
			this->pnlMain->BackColor = System::Drawing::Color::Transparent;
			this->pnlMain->Controls->Add(this->lblselect);
			this->pnlMain->Controls->Add(this->lblExit);
			this->pnlMain->Controls->Add(this->titlepicture);
			this->pnlMain->Controls->Add(this->lblStart);
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(0, 0);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(984, 461);
			this->pnlMain->TabIndex = 3;
			// 
			// lblselect
			// 
			this->lblselect->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblselect->Location = System::Drawing::Point(425, 191);
			this->lblselect->Name = L"lblselect";
			this->lblselect->Size = System::Drawing::Size(158, 29);
			this->lblselect->TabIndex = 3;
			this->lblselect->Text = L"Press Space to Select";
			// 
			// pnlPlay
			// 
			this->pnlPlay->BackColor = System::Drawing::Color::Transparent;
			this->pnlPlay->Controls->Add(this->lblReady);
			this->pnlPlay->Controls->Add(this->label3);
			this->pnlPlay->Controls->Add(this->lblPause);
			this->pnlPlay->Controls->Add(this->lblScore);
			this->pnlPlay->Controls->Add(this->label4);
			this->pnlPlay->Controls->Add(this->label2);
			this->pnlPlay->Controls->Add(this->pictureBox3);
			this->pnlPlay->Controls->Add(this->lblTime);
			this->pnlPlay->Controls->Add(this->label1);
			this->pnlPlay->Controls->Add(this->pictureBox2);
			this->pnlPlay->Controls->Add(this->pictureBox1);
			this->pnlPlay->Location = System::Drawing::Point(0, 0);
			this->pnlPlay->Name = L"pnlPlay";
			this->pnlPlay->Size = System::Drawing::Size(984, 461);
			this->pnlPlay->TabIndex = 4;
			this->pnlPlay->Visible = false;
			// 
			// lblReady
			// 
			this->lblReady->Font = (gcnew System::Drawing::Font(L"Vanilla", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblReady->Location = System::Drawing::Point(218, 144);
			this->lblReady->Name = L"lblReady";
			this->lblReady->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblReady->Size = System::Drawing::Size(553, 85);
			this->lblReady->TabIndex = 11;
			this->lblReady->Text = L"Get Ready !!!";
			this->lblReady->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblReady->Click += gcnew System::EventHandler(this, &Form1::lblReady_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(473, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 75);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Score:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblPause
			// 
			this->lblPause->Font = (gcnew System::Drawing::Font(L"Gabriola", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPause->ForeColor = System::Drawing::Color::White;
			this->lblPause->Location = System::Drawing::Point(384, 399);
			this->lblPause->Name = L"lblPause";
			this->lblPause->Size = System::Drawing::Size(178, 44);
			this->lblPause->TabIndex = 10;
			this->lblPause->Text = L"Press P to Pause";
			// 
			// lblScore
			// 
			this->lblScore->BackColor = System::Drawing::Color::Transparent;
			this->lblScore->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblScore->ForeColor = System::Drawing::Color::White;
			this->lblScore->Location = System::Drawing::Point(699, 34);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(200, 75);
			this->lblScore->TabIndex = 3;
			this->lblScore->Text = L"0";
			this->lblScore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(576, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 50);
			this->label4->TabIndex = 9;
			this->label4->Text = L"L";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(121, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 50);
			this->label2->TabIndex = 8;
			this->label2->Text = L"A";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Location = System::Drawing::Point(632, 301);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox3_Paint);
			// 
			// lblTime
			// 
			this->lblTime->BackColor = System::Drawing::Color::Transparent;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->ForeColor = System::Drawing::Color::White;
			this->lblTime->Location = System::Drawing::Point(297, 34);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(200, 75);
			this->lblTime->TabIndex = 1;
			this->lblTime->Text = L"30";
			this->lblTime->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Vanilla", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(101, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Time:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(177, 301);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Location = System::Drawing::Point(50, 128);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 120);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// New
			// 
			this->New->Interval = 500;
			this->New->Tick += gcnew System::EventHandler(this, &Form1::New_Tick);
			// 
			// speed
			// 
			this->speed->Interval = 15;
			this->speed->Tick += gcnew System::EventHandler(this, &Form1::speed_Tick);
			// 
			// countdown
			// 
			this->countdown->Interval = 1000;
			this->countdown->Tick += gcnew System::EventHandler(this, &Form1::countdown_Tick);
			// 
			// pnlscore
			// 
			this->pnlscore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pnlscore->Controls->Add(this->lblrestart);
			this->pnlscore->Controls->Add(this->lblExit2);
			this->pnlscore->Controls->Add(this->lblFinalScore);
			this->pnlscore->Controls->Add(this->label5);
			this->pnlscore->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlscore->Location = System::Drawing::Point(0, 0);
			this->pnlscore->Name = L"pnlscore";
			this->pnlscore->Size = System::Drawing::Size(984, 461);
			this->pnlscore->TabIndex = 5;
			this->pnlscore->Visible = false;
			// 
			// lblrestart
			// 
			this->lblrestart->AutoSize = true;
			this->lblrestart->BackColor = System::Drawing::Color::Transparent;
			this->lblrestart->Font = (gcnew System::Drawing::Font(L"Vanilla", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblrestart->ForeColor = System::Drawing::Color::White;
			this->lblrestart->Location = System::Drawing::Point(573, 238);
			this->lblrestart->Name = L"lblrestart";
			this->lblrestart->Size = System::Drawing::Size(360, 67);
			this->lblrestart->TabIndex = 9;
			this->lblrestart->Text = L"Restart";
			this->lblrestart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblrestart->Click += gcnew System::EventHandler(this, &Form1::lblrestart_Click);
			// 
			// lblExit2
			// 
			this->lblExit2->AutoSize = true;
			this->lblExit2->BackColor = System::Drawing::Color::Transparent;
			this->lblExit2->Font = (gcnew System::Drawing::Font(L"Vanilla", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExit2->ForeColor = System::Drawing::Color::White;
			this->lblExit2->Location = System::Drawing::Point(575, 329);
			this->lblExit2->Name = L"lblExit2";
			this->lblExit2->Size = System::Drawing::Size(196, 67);
			this->lblExit2->TabIndex = 8;
			this->lblExit2->Text = L"Exit";
			this->lblExit2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblExit2->Click += gcnew System::EventHandler(this, &Form1::lblExit2_Click);
			// 
			// lblFinalScore
			// 
			this->lblFinalScore->AutoSize = true;
			this->lblFinalScore->BackColor = System::Drawing::Color::Transparent;
			this->lblFinalScore->Font = (gcnew System::Drawing::Font(L"Vanilla", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFinalScore->ForeColor = System::Drawing::Color::White;
			this->lblFinalScore->Location = System::Drawing::Point(453, 51);
			this->lblFinalScore->Name = L"lblFinalScore";
			this->lblFinalScore->Size = System::Drawing::Size(279, 67);
			this->lblFinalScore->TabIndex = 7;
			this->lblFinalScore->Text = L"Score:";
			this->lblFinalScore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Vanilla", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(174, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 67);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Score:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tmrSelect
			// 
			this->tmrSelect->Enabled = true;
			this->tmrSelect->Interval = 1000;
			this->tmrSelect->Tick += gcnew System::EventHandler(this, &Form1::tmrSelect_Tick);
			// 
			// changeColor
			// 
			this->changeColor->Enabled = true;
			this->changeColor->Interval = 10;
			this->changeColor->Tick += gcnew System::EventHandler(this, &Form1::changeColor_Tick);
			// 
			// pnlPause
			// 
			this->pnlPause->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pnlPause->Controls->Add(this->lblPauseExit);
			this->pnlPause->Controls->Add(this->lblPauseRestart);
			this->pnlPause->Controls->Add(this->lblPauseContinue);
			this->pnlPause->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlPause->Location = System::Drawing::Point(0, 0);
			this->pnlPause->Name = L"pnlPause";
			this->pnlPause->Size = System::Drawing::Size(984, 461);
			this->pnlPause->TabIndex = 6;
			this->pnlPause->Visible = false;
			// 
			// lblPauseExit
			// 
			this->lblPauseExit->AutoSize = true;
			this->lblPauseExit->BackColor = System::Drawing::Color::Transparent;
			this->lblPauseExit->Font = (gcnew System::Drawing::Font(L"Vanilla", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPauseExit->ForeColor = System::Drawing::Color::White;
			this->lblPauseExit->Location = System::Drawing::Point(432, 289);
			this->lblPauseExit->Name = L"lblPauseExit";
			this->lblPauseExit->Size = System::Drawing::Size(109, 37);
			this->lblPauseExit->TabIndex = 2;
			this->lblPauseExit->Text = L"Exit";
			this->lblPauseExit->Click += gcnew System::EventHandler(this, &Form1::lblPauseExit_Click_1);
			// 
			// lblPauseRestart
			// 
			this->lblPauseRestart->AutoSize = true;
			this->lblPauseRestart->BackColor = System::Drawing::Color::Transparent;
			this->lblPauseRestart->Font = (gcnew System::Drawing::Font(L"Vanilla", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPauseRestart->ForeColor = System::Drawing::Color::White;
			this->lblPauseRestart->Location = System::Drawing::Point(385, 220);
			this->lblPauseRestart->Name = L"lblPauseRestart";
			this->lblPauseRestart->Size = System::Drawing::Size(198, 37);
			this->lblPauseRestart->TabIndex = 1;
			this->lblPauseRestart->Text = L"Restart";
			// 
			// lblPauseContinue
			// 
			this->lblPauseContinue->AutoSize = true;
			this->lblPauseContinue->BackColor = System::Drawing::Color::Transparent;
			this->lblPauseContinue->Font = (gcnew System::Drawing::Font(L"Vanilla", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPauseContinue->ForeColor = System::Drawing::Color::White;
			this->lblPauseContinue->Location = System::Drawing::Point(381, 163);
			this->lblPauseContinue->Name = L"lblPauseContinue";
			this->lblPauseContinue->Size = System::Drawing::Size(219, 37);
			this->lblPauseContinue->TabIndex = 0;
			this->lblPauseContinue->Text = L"Continue";
			// 
			// Ready
			// 
			this->Ready->Interval = 500;
			this->Ready->Tick += gcnew System::EventHandler(this, &Form1::Ready_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->pnlPlay);
			this->Controls->Add(this->pnlMain);
			this->Controls->Add(this->pnlscore);
			this->Controls->Add(this->pnlPause);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"RainbowDrum";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->titlepicture))->EndInit();
			this->pnlMain->ResumeLayout(false);
			this->pnlMain->PerformLayout();
			this->pnlPlay->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnlscore->ResumeLayout(false);
			this->pnlscore->PerformLayout();
			this->pnlPause->ResumeLayout(false);
			this->pnlPause->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		srand(time(NULL));
		lblPauseContinue->Parent = pnlPause;
		lblPauseExit->Parent = pnlPause;
		lblPauseRestart->Parent = pnlPause;

		label1->Parent = pnlPlay;
		lblTime->Parent = pnlPlay;
		label3->Parent = pnlPlay;
		lblScore->Parent = pnlPlay;

	}


	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {


		switch (e->KeyCode)
		{
		case Keys::P:
			if (pnlPlay->Visible == true)
			{
				pnlcount = 2;
				countdown->Enabled = false;
				New->Enabled = false;
				speed->Enabled = false;
				pnlPause->Visible = true;
				pnlPlay->Visible = false;
				ready = 6;
			}
			break;
		case Keys::Space:
			if (pnlcount == 1)
			{
				switch (keycountmain)
				{
				case 1:
					lblStart_Click(sender, e);
					break;

				case 2:
					lblExit_Click(sender, e);
					break;

				}
			}

			if (pnlcount == 2)
			{
				switch (keycountpause)
				{
				case 1:
					lblPauseContinue_Click(sender, e);
					break;

				case 2:
					lblPauseRestart_Click(sender, e);
					break;

				case 3:
					lblPauseExit_Click(sender, e);
					break;

				}
			}

			if (pnlcount == 4)
			{
				switch (keycountscore)
				{
				case 1:
					lblrestart_Click(sender, e);
					break;

				case 2:
					lblExit2_Click(sender, e);
					break;

				}
			}
			break;

		case Keys::Down:
			if (pnlcount == 1)
			{
				if (keycountmain == 2)
				{
					break;
				}
				else
				{
					keycountmain = keycountmain + 1;
					if (keycountmain == 2)
					{
						lblStart->ForeColor = Color::White;
					}
				}
			}

			if (pnlcount == 2)
			{
				if (keycountpause == 3)
				{
					break;
				}
				else
				{
					keycountpause = keycountpause + 1;
					if (keycountpause == 2)
					{
						lblPauseContinue->ForeColor = Color::White;
						lblPauseExit->ForeColor = Color::White;
					}
					if (keycountpause == 3)
					{
						lblPauseContinue->ForeColor = Color::White;
						lblPauseRestart->ForeColor = Color::White;
					}

				}
			}

			if (pnlcount == 4)
			{
				if (keycountscore == 2)
				{
					break;
				}
				else
				{
					keycountscore = keycountscore + 1;
					if (keycountscore == 2)
					{
						lblrestart->ForeColor = Color::White;
					}
				}
			}

			break;

		case Keys::Up:
			if (pnlcount == 1)
			{
				if (keycountmain == 1)
				{
					break;
				}
				else
				{
					keycountmain = keycountmain - 1;
					if (keycountmain == 1)
					{
						lblExit->ForeColor = Color::White;
					}
				}
			}

			if (pnlcount == 2)
			{
				if (keycountpause == 1)
				{
					break;
				}
				else
				{
					keycountpause = keycountpause - 1;
					if (keycountpause == 1)
					{
						lblPauseRestart->ForeColor = Color::White;
						lblPauseExit->ForeColor = Color::White;
					}
					if (keycountpause == 2)
					{
						lblPauseContinue->ForeColor = Color::White;
						lblPauseExit->ForeColor = Color::White;
					}

				}
			}

			if (pnlcount == 4)
			{
				if (keycountscore == 1)
				{
					break;
				}
				else
				{
					keycountscore = keycountscore - 1;
					if (keycountscore == 1)
					{
						lblExit2->ForeColor = Color::White;
					}
				}
			}

			break;

		case  Keys::A:
			if (pnlcount == 3)
			{
				for each (Control^ typeA in pictureBox1->Controls)
				{
					if (typeA->GetType() == System::Windows::Forms::PictureBox::typeid)
					{
						if (typeA->Location.X <= 150 && typeA->Location.X >= 50 && typeA->BackColor == Color::Red)
						{
							score_text++;
							pictureBox1->Controls->Remove(typeA);
							lblScore->Text = score_text.ToString();
						}
					}
				}
			}
			break;

		case  Keys::L:
			if (pnlcount == 3)
			{
				for each (Control^ typeL in pictureBox1->Controls)
				{
					if (typeL->GetType() == System::Windows::Forms::PictureBox::typeid)
					{
						if (typeL->Location.X <= 150 && typeL->Location.X >= 50 && typeL->BackColor == Color::LimeGreen)
						{
							score_text++;
							pictureBox1->Controls->Remove(typeL);
							lblScore->Text = score_text.ToString();
						}

					}
				}
			}
			break;

		default:
			break;
		}
	}

	private: System::Void lblStart_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlMain->Visible = false;
		pnlPlay->Visible = true;
		pnlcount = 3;
		ready = 6;
		Ready->Enabled = true;
	}

	private: System::Void lblExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::ExitThread();
	}
	private: System::Void titlepicture_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		SolidBrush^ LOL1 = gcnew SolidBrush(Color::Red);
		e->Graphics->FillRectangle(LOL1, 50, 10, 100, 100);
		SolidBrush^ LOL2 = gcnew SolidBrush(Color::Orange);
		e->Graphics->FillRectangle(LOL2, 57, 17, 86, 86);
		SolidBrush^ LOL3 = gcnew SolidBrush(Color::Yellow);
		e->Graphics->FillRectangle(LOL3, 114 - 50, 24, 72, 72);
		SolidBrush^ LOL4 = gcnew SolidBrush(Color::LimeGreen);
		e->Graphics->FillRectangle(LOL4, 121 - 50, 31, 58, 58);
		SolidBrush^ LOL5 = gcnew SolidBrush(Color::Blue);
		e->Graphics->FillRectangle(LOL5, 128 - 50, 38, 44, 44);
		SolidBrush^ LOL6 = gcnew SolidBrush(Color::Violet);
		e->Graphics->FillRectangle(LOL6, 135 - 50, 45, 30, 30);
		SolidBrush^ LOL7 = gcnew SolidBrush(Color::Purple);
		e->Graphics->FillRectangle(LOL7, 142 - 50, 52, 16, 16);

	}


	private: System::Void pictureBox2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		SolidBrush^ LOL2 = gcnew SolidBrush(Color::Black);
		e->Graphics->FillRectangle(LOL2, 0, 0, 50, 50);
		SolidBrush^ LOL1 = gcnew SolidBrush(Color::Red);
		e->Graphics->FillRectangle(LOL1, 2, 2, 46, 46);

	}
	private: System::Void pictureBox3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		SolidBrush^ LOL2 = gcnew SolidBrush(Color::Black);
		e->Graphics->FillRectangle(LOL2, 0, 0, 50, 50);
		SolidBrush^ LOL1 = gcnew SolidBrush(Color::LimeGreen);
		e->Graphics->FillRectangle(LOL1, 2, 2, 46, 46);
	}


	private: System::Void New_Tick(System::Object^  sender, System::EventArgs^  e) {
		int num = rand() % 3 + 1;
		switch (num) {

		case 1:
			PictureBox^ New1;
			New1 = (gcnew System::Windows::Forms::PictureBox());
			New1->BackColor = Color::Red;
			New1->Location = Point(800, 25);
			New1->Size = System::Drawing::Size(70, 70);
			pictureBox1->Controls->Add(New1);
			break;

		case 2:
			PictureBox^ New2;
			New2 = (gcnew System::Windows::Forms::PictureBox());
			New2->BackColor = Color::LimeGreen;
			New2->Location = Point(800, 25);
			New2->Size = System::Drawing::Size(70, 70);
			pictureBox1->Controls->Add(New2);
			break;
		}

	}
	private: System::Void speed_Tick(System::Object^  sender, System::EventArgs^  e) {
		for each(Control ^perContol in pictureBox1->Controls) {
			if (perContol->GetType() == System::Windows::Forms::PictureBox::typeid) {
				perContol->Location = Point(perContol->Location.X - 7, perContol->Location.Y);
				if (perContol->Location.X <= 0) {
					lblScore->Text = score_text.ToString();
					pictureBox1->Controls->Remove(perContol);
				}
			}
		}

	}
	private: System::Void countdown_Tick(System::Object^  sender, System::EventArgs^  e) {
		timecountdown--;
		lblTime->Text = timecountdown.ToString();
		if (timecountdown == 0)
		{
			countdown->Enabled = false;
			New->Enabled = false;
			speed->Enabled = false;

			pnlPlay->Visible = false;
			pnlscore->Visible = true;
			lblFinalScore->Text = score_text.ToString();
			pnlcount = 4;
		}
	}
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void lblExit2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::ExitThread();
	}
	private: System::Void lblrestart_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlscore->Visible = false;
		pnlPlay->Visible = true;
		score_text = 0;
		timecountdown = 30;
		for (int i = 0; i < 7;i++)
		{
			for each (Control^ typeL in pictureBox1->Controls)
			{
				if (typeL->GetType() == System::Windows::Forms::PictureBox::typeid)
				{
					if (typeL->Location.X >= -150)
					{
						pictureBox1->Controls->Remove(typeL);
					}

				}
			}
		}
		ready = 6;
		Ready->Enabled = true;
		lblScore->Text = score_text.ToString();
		lblTime->Text = timecountdown.ToString();
		pnlcount = 3;

	}
	private: System::Void tmrSelect_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (pnlcount == 1)
		{
			if (lblselect->Text == "Press Space to Select")
			{
				lblselect->Text = " ";
			}
			else 
			{
				lblselect->Text = "Press Space to Select";
			}
		}

	if(pnlcount==3)
		if (lblPause->Text == "Press P to Pause")
		{
			lblPause->Text = " ";
		}
		else
		{
			lblPause->Text = "Press P to Pause";
		}
	}
	private: System::Void changeColor_Tick(System::Object^  sender, System::EventArgs^  e) {
		int r, g, b;
		srand(time(NULL));
		r = rand() % 255;
		g = rand() % 255;
		b = rand() % 255;

		if (pnlcount == 1)
		{
			if (keycountmain == 1)
			{
				lblStart->ForeColor = Color::FromArgb(r, g, b);
			}
			if (keycountmain == 2)
			{
				lblExit->ForeColor = Color::FromArgb(r, g, b);

			}
		}

		if (pnlcount == 2)
		{
			if (keycountpause == 1)
			{
				lblPauseContinue->ForeColor = Color::FromArgb(r, g, b);
			}
			else if (keycountpause == 2)
			{
				lblPauseRestart->ForeColor = Color::FromArgb(r, g, b);
			}
			else if (keycountpause == 3)
			{
				lblPauseExit->ForeColor = Color::FromArgb(r, g, b);
			}
		}

		if (pnlcount == 4)
		{
			if (keycountscore == 1)
			{
				lblrestart->ForeColor = Color::FromArgb(r, g, b);
			}
			if (keycountscore == 2)
			{
				lblExit2->ForeColor = Color::FromArgb(r, g, b);

			}
		}
	}
	private: System::Void lblPauseContinue_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlPause->Visible = false;
		pnlPlay->Visible = true;
		ready = 6;
		Ready->Enabled = true;
		pnlcount = 3;
	}
	private: System::Void lblPauseRestart_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlPause->Visible = false;
		pnlPlay->Visible = true;
		ready = 6;
		Ready->Enabled = true;
		score_text = 0;
		for (int i = 0; i < 7;i++)
		{
			for each (Control^ typeL in pictureBox1->Controls)
			{
				if (typeL->GetType() == System::Windows::Forms::PictureBox::typeid)
				{
					if (typeL->Location.X >= -150)
					{
						pictureBox1->Controls->Remove(typeL);
					}

				}
			}
		}
		timecountdown = 30;
		lblScore->Text = score_text.ToString();
		lblTime->Text = timecountdown.ToString();
		pnlcount = 3;
	}
	private: System::Void lblPauseExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::ExitThread();
	}

	private: System::Void pnlPause_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void lblPauseExit_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Ready_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (ready == 6)
	{
		lblReady->Visible = true;
		lblReady->Text = "Get Ready !!!";
		ready = ready - 1;
	}
	else if (ready >= 1 && ready <= 5)
	{
		lblReady->Text = ready.ToString();
		ready = ready - 1;
	}
	else if (ready == 0)
	{
		lblReady->Visible = false;
		New->Enabled = true;
		speed->Enabled = true;
		countdown->Enabled = true;
		Ready->Enabled = false;
	}
	
}
private: System::Void lblReady_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
