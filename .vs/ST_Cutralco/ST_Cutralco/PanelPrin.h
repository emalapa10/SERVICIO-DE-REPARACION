#pragma once

namespace ST_Cutralco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PanelPrin
	/// </summary>
	public ref class PanelPrin : public System::Windows::Forms::Form
	{
	public:
		PanelPrin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PanelPrin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_lateral;
	private: System::Windows::Forms::Button^ btn_NuevaAccion;
	protected:


	private: System::Windows::Forms::Button^ btn_Order;
	private: System::Windows::Forms::Panel^ margen;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Menu_Estados;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_estado1;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_estado2;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_estado3;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_estado4;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_estado5;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::MenuStrip^ menuStrip6;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_AccionLista;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ActMod;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ActCons;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ActElim;




	private: System::Windows::Forms::MenuStrip^ menuStrip5;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_OrdenLista;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_OrdenMod;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_OrdenCons;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_OrdenElim;




	private: System::Windows::Forms::MenuStrip^ menuStrip4;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_TechlLista;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_TechAgreg;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_TechMod;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_TechCons;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_TechElim;





	private: System::Windows::Forms::MenuStrip^ menuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ClienteslLista;

	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ClientesMod;

	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ClientesCons;

	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_ClientesElim;



	private: System::Windows::Forms::Label^ lbl_Cutralco;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_EquiposlLista;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_EquiposMod;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_EquiposCons;
	private: System::Windows::Forms::ToolStripMenuItem^ btnMenu_EquiposElim;








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->menuStrip6 = (gcnew System::Windows::Forms::MenuStrip());
			this->btnMenu_AccionLista = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_ActMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_ActCons = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_ActElim = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip5 = (gcnew System::Windows::Forms::MenuStrip());
			this->btnMenu_OrdenLista = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_OrdenMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_OrdenCons = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_OrdenElim = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip4 = (gcnew System::Windows::Forms::MenuStrip());
			this->btnMenu_TechlLista = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_TechAgreg = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_TechMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_TechCons = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_TechElim = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->btnMenu_ClienteslLista = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_ClientesMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_ClientesCons = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_ClientesElim = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btn_NuevaAccion = (gcnew System::Windows::Forms::Button());
			this->btn_Order = (gcnew System::Windows::Forms::Button());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->lbl_Cutralco = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Menu_Estados = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_estado1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_estado2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_estado3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_estado4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_estado5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->btnMenu_EquiposlLista = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_EquiposMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_EquiposCons = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMenu_EquiposElim = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->menuStrip6->SuspendLayout();
			this->menuStrip5->SuspendLayout();
			this->menuStrip4->SuspendLayout();
			this->menuStrip3->SuspendLayout();
			this->margen->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel_lateral->Controls->Add(this->menuStrip6);
			this->panel_lateral->Controls->Add(this->menuStrip5);
			this->panel_lateral->Controls->Add(this->menuStrip4);
			this->panel_lateral->Controls->Add(this->menuStrip3);
			this->panel_lateral->Controls->Add(this->btn_NuevaAccion);
			this->panel_lateral->Controls->Add(this->btn_Order);
			this->panel_lateral->Controls->Add(this->margen);
			this->panel_lateral->Controls->Add(this->menuStrip1);
			this->panel_lateral->Controls->Add(this->menuStrip2);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(190, 456);
			this->panel_lateral->TabIndex = 0;
			// 
			// menuStrip6
			// 
			this->menuStrip6->BackColor = System::Drawing::Color::MidnightBlue;
			this->menuStrip6->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip6->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip6->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnMenu_AccionLista });
			this->menuStrip6->Location = System::Drawing::Point(0, 323);
			this->menuStrip6->Name = L"menuStrip6";
			this->menuStrip6->Size = System::Drawing::Size(147, 28);
			this->menuStrip6->TabIndex = 8;
			this->menuStrip6->Text = L"menuStrip6";
			// 
			// btnMenu_AccionLista
			// 
			this->btnMenu_AccionLista->BackColor = System::Drawing::Color::MidnightBlue;
			this->btnMenu_AccionLista->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->btnMenu_ActMod,
					this->btnMenu_ActCons, this->btnMenu_ActElim
			});
			this->btnMenu_AccionLista->Name = L"btnMenu_AccionLista";
			this->btnMenu_AccionLista->Size = System::Drawing::Size(135, 24);
			this->btnMenu_AccionLista->Text = L"LISTA ACCIONES";
			// 
			// btnMenu_ActMod
			// 
			this->btnMenu_ActMod->Name = L"btnMenu_ActMod";
			this->btnMenu_ActMod->Size = System::Drawing::Size(225, 24);
			this->btnMenu_ActMod->Text = L"MODIFICAR ACCION";
			// 
			// btnMenu_ActCons
			// 
			this->btnMenu_ActCons->Name = L"btnMenu_ActCons";
			this->btnMenu_ActCons->Size = System::Drawing::Size(225, 24);
			this->btnMenu_ActCons->Text = L"CONSULTAR ACCION";
			// 
			// btnMenu_ActElim
			// 
			this->btnMenu_ActElim->Name = L"btnMenu_ActElim";
			this->btnMenu_ActElim->Size = System::Drawing::Size(225, 24);
			this->btnMenu_ActElim->Text = L"ELIMINAR ACCION";
			// 
			// menuStrip5
			// 
			this->menuStrip5->BackColor = System::Drawing::Color::MidnightBlue;
			this->menuStrip5->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip5->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnMenu_OrdenLista });
			this->menuStrip5->Location = System::Drawing::Point(0, 286);
			this->menuStrip5->Name = L"menuStrip5";
			this->menuStrip5->Size = System::Drawing::Size(141, 28);
			this->menuStrip5->TabIndex = 7;
			this->menuStrip5->Text = L"menuStrip5";
			// 
			// btnMenu_OrdenLista
			// 
			this->btnMenu_OrdenLista->BackColor = System::Drawing::Color::MidnightBlue;
			this->btnMenu_OrdenLista->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->btnMenu_OrdenMod,
					this->btnMenu_OrdenCons, this->btnMenu_OrdenElim
			});
			this->btnMenu_OrdenLista->Name = L"btnMenu_OrdenLista";
			this->btnMenu_OrdenLista->Size = System::Drawing::Size(129, 24);
			this->btnMenu_OrdenLista->Text = L"LISTA ORDENES";
			// 
			// btnMenu_OrdenMod
			// 
			this->btnMenu_OrdenMod->Name = L"btnMenu_OrdenMod";
			this->btnMenu_OrdenMod->Size = System::Drawing::Size(219, 24);
			this->btnMenu_OrdenMod->Text = L"MODIFICAR ORDEN";
			// 
			// btnMenu_OrdenCons
			// 
			this->btnMenu_OrdenCons->Name = L"btnMenu_OrdenCons";
			this->btnMenu_OrdenCons->Size = System::Drawing::Size(219, 24);
			this->btnMenu_OrdenCons->Text = L"CONSULTAR ORDEN";
			// 
			// btnMenu_OrdenElim
			// 
			this->btnMenu_OrdenElim->Name = L"btnMenu_OrdenElim";
			this->btnMenu_OrdenElim->Size = System::Drawing::Size(219, 24);
			this->btnMenu_OrdenElim->Text = L"ELIMINAR ORDEN";
			// 
			// menuStrip4
			// 
			this->menuStrip4->BackColor = System::Drawing::Color::DodgerBlue;
			this->menuStrip4->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip4->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnMenu_TechlLista });
			this->menuStrip4->Location = System::Drawing::Point(0, 221);
			this->menuStrip4->Name = L"menuStrip4";
			this->menuStrip4->Size = System::Drawing::Size(145, 28);
			this->menuStrip4->TabIndex = 6;
			this->menuStrip4->Text = L"menuStrip4";
			// 
			// btnMenu_TechlLista
			// 
			this->btnMenu_TechlLista->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->btnMenu_TechAgreg,
					this->btnMenu_TechMod, this->btnMenu_TechCons, this->btnMenu_TechElim
			});
			this->btnMenu_TechlLista->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMenu_TechlLista->Name = L"btnMenu_TechlLista";
			this->btnMenu_TechlLista->Size = System::Drawing::Size(133, 24);
			this->btnMenu_TechlLista->Text = L"LISTA TECNICOS";
			// 
			// btnMenu_TechAgreg
			// 
			this->btnMenu_TechAgreg->Name = L"btnMenu_TechAgreg";
			this->btnMenu_TechAgreg->Size = System::Drawing::Size(231, 24);
			this->btnMenu_TechAgreg->Text = L"AGREGAR TECNICO";
			// 
			// btnMenu_TechMod
			// 
			this->btnMenu_TechMod->Name = L"btnMenu_TechMod";
			this->btnMenu_TechMod->Size = System::Drawing::Size(231, 24);
			this->btnMenu_TechMod->Text = L"MODIFICAR TECNICO";
			// 
			// btnMenu_TechCons
			// 
			this->btnMenu_TechCons->Name = L"btnMenu_TechCons";
			this->btnMenu_TechCons->Size = System::Drawing::Size(231, 24);
			this->btnMenu_TechCons->Text = L"CONSULTAR TECNICO";
			// 
			// btnMenu_TechElim
			// 
			this->btnMenu_TechElim->Name = L"btnMenu_TechElim";
			this->btnMenu_TechElim->Size = System::Drawing::Size(231, 24);
			this->btnMenu_TechElim->Text = L"ELIMINAR TECNICO";
			// 
			// menuStrip3
			// 
			this->menuStrip3->BackColor = System::Drawing::Color::DodgerBlue;
			this->menuStrip3->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip3->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnMenu_ClienteslLista });
			this->menuStrip3->Location = System::Drawing::Point(0, 184);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Size = System::Drawing::Size(139, 28);
			this->menuStrip3->TabIndex = 5;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// btnMenu_ClienteslLista
			// 
			this->btnMenu_ClienteslLista->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->btnMenu_ClientesMod,
					this->btnMenu_ClientesCons, this->btnMenu_ClientesElim
			});
			this->btnMenu_ClienteslLista->Name = L"btnMenu_ClienteslLista";
			this->btnMenu_ClienteslLista->Size = System::Drawing::Size(127, 24);
			this->btnMenu_ClienteslLista->Text = L"LISTA CLIENTES";
			// 
			// btnMenu_ClientesMod
			// 
			this->btnMenu_ClientesMod->Name = L"btnMenu_ClientesMod";
			this->btnMenu_ClientesMod->Size = System::Drawing::Size(225, 24);
			this->btnMenu_ClientesMod->Text = L"MODIFICAR CLIENTE";
			// 
			// btnMenu_ClientesCons
			// 
			this->btnMenu_ClientesCons->Name = L"btnMenu_ClientesCons";
			this->btnMenu_ClientesCons->Size = System::Drawing::Size(225, 24);
			this->btnMenu_ClientesCons->Text = L"CONSULTAR CLIENTE";
			// 
			// btnMenu_ClientesElim
			// 
			this->btnMenu_ClientesElim->Name = L"btnMenu_ClientesElim";
			this->btnMenu_ClientesElim->Size = System::Drawing::Size(225, 24);
			this->btnMenu_ClientesElim->Text = L"ELIMINAR CLIENTE";
			// 
			// btn_NuevaAccion
			// 
			this->btn_NuevaAccion->BackColor = System::Drawing::Color::Navy;
			this->btn_NuevaAccion->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btn_NuevaAccion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_NuevaAccion->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_NuevaAccion->Location = System::Drawing::Point(0, 409);
			this->btn_NuevaAccion->Name = L"btn_NuevaAccion";
			this->btn_NuevaAccion->Size = System::Drawing::Size(190, 47);
			this->btn_NuevaAccion->TabIndex = 2;
			this->btn_NuevaAccion->Text = L"NUEVA ACCION";
			this->btn_NuevaAccion->UseVisualStyleBackColor = false;
			// 
			// btn_Order
			// 
			this->btn_Order->BackColor = System::Drawing::Color::Navy;
			this->btn_Order->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_Order->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Order->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Order->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btn_Order->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Order->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Order->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_Order->Location = System::Drawing::Point(0, 71);
			this->btn_Order->Name = L"btn_Order";
			this->btn_Order->Size = System::Drawing::Size(190, 35);
			this->btn_Order->TabIndex = 0;
			this->btn_Order->Text = L"NUEVA ORDEN";
			this->btn_Order->UseVisualStyleBackColor = false;
			// 
			// margen
			// 
			this->margen->Controls->Add(this->lbl_Cutralco);
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(190, 71);
			this->margen->TabIndex = 0;
			// 
			// lbl_Cutralco
			// 
			this->lbl_Cutralco->AutoSize = true;
			this->lbl_Cutralco->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cutralco->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbl_Cutralco->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Cutralco->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->lbl_Cutralco->Location = System::Drawing::Point(5, 18);
			this->lbl_Cutralco->Name = L"lbl_Cutralco";
			this->lbl_Cutralco->Size = System::Drawing::Size(182, 33);
			this->lbl_Cutralco->TabIndex = 0;
			this->lbl_Cutralco->Text = L"CUTRALCO";
			this->lbl_Cutralco->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DodgerBlue;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Menu_Estados });
			this->menuStrip1->Location = System::Drawing::Point(0, 109);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(138, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Menu_Estados
			// 
			this->Menu_Estados->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->btnMenu_estado1,
					this->btnMenu_estado2, this->btnMenu_estado3, this->btnMenu_estado4, this->btnMenu_estado5
			});
			this->Menu_Estados->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Menu_Estados->Name = L"Menu_Estados";
			this->Menu_Estados->Size = System::Drawing::Size(126, 24);
			this->Menu_Estados->Text = L"LISTA ESTADOS";
			// 
			// btnMenu_estado1
			// 
			this->btnMenu_estado1->Name = L"btnMenu_estado1";
			this->btnMenu_estado1->Size = System::Drawing::Size(146, 24);
			this->btnMenu_estado1->Text = L"ESTADO 1";
			// 
			// btnMenu_estado2
			// 
			this->btnMenu_estado2->Name = L"btnMenu_estado2";
			this->btnMenu_estado2->Size = System::Drawing::Size(146, 24);
			this->btnMenu_estado2->Text = L"ESTADO 2";
			// 
			// btnMenu_estado3
			// 
			this->btnMenu_estado3->Name = L"btnMenu_estado3";
			this->btnMenu_estado3->Size = System::Drawing::Size(146, 24);
			this->btnMenu_estado3->Text = L"ESTADO 3";
			// 
			// btnMenu_estado4
			// 
			this->btnMenu_estado4->Name = L"btnMenu_estado4";
			this->btnMenu_estado4->Size = System::Drawing::Size(146, 24);
			this->btnMenu_estado4->Text = L"ESTADO 4";
			// 
			// btnMenu_estado5
			// 
			this->btnMenu_estado5->Name = L"btnMenu_estado5";
			this->btnMenu_estado5->Size = System::Drawing::Size(146, 24);
			this->btnMenu_estado5->Text = L"ESTADO 5";
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::Color::DodgerBlue;
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip2->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnMenu_EquiposlLista });
			this->menuStrip2->Location = System::Drawing::Point(0, 146);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(136, 28);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// btnMenu_EquiposlLista
			// 
			this->btnMenu_EquiposlLista->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->btnMenu_EquiposMod,
					this->btnMenu_EquiposCons, this->btnMenu_EquiposElim
			});
			this->btnMenu_EquiposlLista->Name = L"btnMenu_EquiposlLista";
			this->btnMenu_EquiposlLista->Size = System::Drawing::Size(124, 24);
			this->btnMenu_EquiposlLista->Text = L"LISTA EQUIPOS";
			// 
			// btnMenu_EquiposMod
			// 
			this->btnMenu_EquiposMod->Name = L"btnMenu_EquiposMod";
			this->btnMenu_EquiposMod->Size = System::Drawing::Size(222, 24);
			this->btnMenu_EquiposMod->Text = L"MODIFICAR EQUIPO";
			// 
			// btnMenu_EquiposCons
			// 
			this->btnMenu_EquiposCons->Name = L"btnMenu_EquiposCons";
			this->btnMenu_EquiposCons->Size = System::Drawing::Size(222, 24);
			this->btnMenu_EquiposCons->Text = L"CONSULTAR EQUIPO";
			// 
			// btnMenu_EquiposElim
			// 
			this->btnMenu_EquiposElim->Name = L"btnMenu_EquiposElim";
			this->btnMenu_EquiposElim->Size = System::Drawing::Size(222, 24);
			this->btnMenu_EquiposElim->Text = L"ELIMINAR EQUIPO";
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(190, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(751, 456);
			this->panel_contenedor->TabIndex = 1;
			// 
			// PanelPrin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(941, 456);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->Name = L"PanelPrin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PanelPrin";
			this->panel_lateral->ResumeLayout(false);
			this->panel_lateral->PerformLayout();
			this->menuStrip6->ResumeLayout(false);
			this->menuStrip6->PerformLayout();
			this->menuStrip5->ResumeLayout(false);
			this->menuStrip5->PerformLayout();
			this->menuStrip4->ResumeLayout(false);
			this->menuStrip4->PerformLayout();
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->margen->ResumeLayout(false);
			this->margen->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
