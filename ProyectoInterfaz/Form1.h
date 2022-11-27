#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_nombreservis;
	protected:


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aGREGARFRASEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::MenuStrip^ menu_Strip1;

	private: System::Windows::Forms::ToolStripMenuItem^ mENUToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aGREGARFRASEToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cERRARSESIONToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lISTAEQUIPOSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menu_listatareas;

	private: System::Windows::Forms::ToolStripMenuItem^ menu_listacliente;
	private: System::Windows::Forms::ToolStripMenuItem^ menu_listastock;




	private: System::Windows::Forms::Label^ lbl_mensajeerror;




	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lbl_nombreservis = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->aGREGARFRASEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_Strip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mENUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aGREGARFRASEToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cERRARSESIONToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lISTAEQUIPOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_listatareas = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_listacliente = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_listastock = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lbl_mensajeerror = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1->SuspendLayout();
			this->menu_Strip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_nombreservis
			// 
			this->lbl_nombreservis->AutoSize = true;
			this->lbl_nombreservis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nombreservis->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->lbl_nombreservis->Location = System::Drawing::Point(146, 161);
			this->lbl_nombreservis->Name = L"lbl_nombreservis";
			this->lbl_nombreservis->Size = System::Drawing::Size(385, 35);
			this->lbl_nombreservis->TabIndex = 0;
			this->lbl_nombreservis->Text = L"SERVICIO TECNICO RMS";
			this->lbl_nombreservis->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aGREGARFRASEToolStripMenuItem,
					this->toolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(163, 48);
			this->contextMenuStrip1->Text = L"MENU";
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::contextMenuStrip1_Opening);
			// 
			// aGREGARFRASEToolStripMenuItem
			// 
			this->aGREGARFRASEToolStripMenuItem->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->aGREGARFRASEToolStripMenuItem->Name = L"aGREGARFRASEToolStripMenuItem";
			this->aGREGARFRASEToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->aGREGARFRASEToolStripMenuItem->Text = L"AGREGAR FRASE";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem1->Text = L"CERRAR SESION";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// menu_Strip1
			// 
			this->menu_Strip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->menu_Strip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mENUToolStripMenuItem,
					this->lISTAEQUIPOSToolStripMenuItem, this->menu_listatareas, this->menu_listacliente, this->menu_listastock
			});
			this->menu_Strip1->Location = System::Drawing::Point(0, 0);
			this->menu_Strip1->Name = L"menu_Strip1";
			this->menu_Strip1->Size = System::Drawing::Size(697, 29);
			this->menu_Strip1->TabIndex = 3;
			this->menu_Strip1->Text = L"menuStrip1";
			// 
			// mENUToolStripMenuItem
			// 
			this->mENUToolStripMenuItem->BackColor = System::Drawing::Color::SandyBrown;
			this->mENUToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aGREGARFRASEToolStripMenuItem1,
					this->cERRARSESIONToolStripMenuItem
			});
			this->mENUToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->mENUToolStripMenuItem->Name = L"mENUToolStripMenuItem";
			this->mENUToolStripMenuItem->Size = System::Drawing::Size(67, 25);
			this->mENUToolStripMenuItem->Text = L"MENU";
			// 
			// aGREGARFRASEToolStripMenuItem1
			// 
			this->aGREGARFRASEToolStripMenuItem1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->aGREGARFRASEToolStripMenuItem1->Name = L"aGREGARFRASEToolStripMenuItem1";
			this->aGREGARFRASEToolStripMenuItem1->Size = System::Drawing::Size(199, 26);
			this->aGREGARFRASEToolStripMenuItem1->Text = L"AGREGAR FRASE";
			// 
			// cERRARSESIONToolStripMenuItem
			// 
			this->cERRARSESIONToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->cERRARSESIONToolStripMenuItem->Name = L"cERRARSESIONToolStripMenuItem";
			this->cERRARSESIONToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->cERRARSESIONToolStripMenuItem->Text = L"CERRAR SESION";
			// 
			// lISTAEQUIPOSToolStripMenuItem
			// 
			this->lISTAEQUIPOSToolStripMenuItem->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->lISTAEQUIPOSToolStripMenuItem->Name = L"lISTAEQUIPOSToolStripMenuItem";
			this->lISTAEQUIPOSToolStripMenuItem->Size = System::Drawing::Size(129, 25);
			this->lISTAEQUIPOSToolStripMenuItem->Text = L"LISTA EQUIPOS";
			this->lISTAEQUIPOSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lISTAEQUIPOSToolStripMenuItem_Click);
			// 
			// menu_listatareas
			// 
			this->menu_listatareas->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menu_listatareas->Name = L"menu_listatareas";
			this->menu_listatareas->Size = System::Drawing::Size(118, 25);
			this->menu_listatareas->Text = L"LISTA TAREAS";
			this->menu_listatareas->Click += gcnew System::EventHandler(this, &Form1::menu_listatareas_Click);
			// 
			// menu_listacliente
			// 
			this->menu_listacliente->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menu_listacliente->Name = L"menu_listacliente";
			this->menu_listacliente->Size = System::Drawing::Size(122, 25);
			this->menu_listacliente->Text = L"LISTA CLIENTE";
			this->menu_listacliente->Click += gcnew System::EventHandler(this, &Form1::menu_listacliente_Click);
			// 
			// menu_listastock
			// 
			this->menu_listastock->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menu_listastock->Name = L"menu_listastock";
			this->menu_listastock->Size = System::Drawing::Size(111, 25);
			this->menu_listastock->Text = L"LISTA STOCK";
			this->menu_listastock->Click += gcnew System::EventHandler(this, &Form1::Mstrip_listastock_Click);
			// 
			// lbl_mensajeerror
			// 
			this->lbl_mensajeerror->AutoSize = true;
			this->lbl_mensajeerror->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_mensajeerror->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_mensajeerror->Location = System::Drawing::Point(138, 155);
			this->lbl_mensajeerror->Name = L"lbl_mensajeerror";
			this->lbl_mensajeerror->Size = System::Drawing::Size(0, 39);
			this->lbl_mensajeerror->TabIndex = 4;
			this->lbl_mensajeerror->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 350);
			this->Controls->Add(this->lbl_mensajeerror);
			this->Controls->Add(this->menu_Strip1);
			this->Controls->Add(this->lbl_nombreservis);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Servicio tecnico";
			this->contextMenuStrip1->ResumeLayout(false);
			this->menu_Strip1->ResumeLayout(false);
			this->menu_Strip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_menudesplegable_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lISTAEQUIPOSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void Mstrip_listastock_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->lbl_mensajeerror->Text == "")
			{
			this->lbl_mensajeerror->Text = "NO SE PUEDE\n UTILIZAR ESTA FUNCION";
				}
			else {
				this->lbl_mensajeerror->Text = "";
						}
		
		
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void menu_listacliente_Click(System::Object^ sender, System::EventArgs^ e)	
	{
			if (this->lbl_mensajeerror->Text == "")
				{
					this->lbl_mensajeerror->Text = "NO SE PUEDE\n UTILIZAR ESTA FUNCION";
					}
				else {
							this->lbl_mensajeerror->Text = "";
							}

	}
private: System::Void menu_listatareas_Click(System::Object^ sender, System::EventArgs^ e) 
		{ 
			if (this->lbl_mensajeerror->Text == "")
				{
					this->lbl_mensajeerror->Text = "NO SE PUEDE\n UTILIZAR ESTA FUNCION";
					}
			else {
						this->lbl_mensajeerror->Text = "";
					}

		}
};
}
