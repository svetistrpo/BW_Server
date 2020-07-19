//All modification was created by editing original DayZ mainmenu class
modded class MainMenu
{
	protected Widget				custom_button1;
	protected Widget				custom_button2;

	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "BW_Gear_Pack_Mod/gui/main_menu.layout" ); // Don't forget to change the path if you've changed the name of the folder or have replaced script into your modpack
		
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "customize_character" );
		m_SettingsButton			= layoutRoot.FindAnyWidget( "settings_button" );
		m_Exit						= layoutRoot.FindAnyWidget( "exit_button" );

		custom_button1				= layoutRoot.FindAnyWidget( "custom_button1" );
		custom_button2				= layoutRoot.FindAnyWidget( "custom_button2" );

		m_Version					= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_CharacterRotationFrame	= layoutRoot.FindAnyWidget( "character_rotation_frame" );
		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );
		m_LastFocusedButton			= m_Play;
		m_ScenePC					= m_Mission.GetIntroScenePC();
		
		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}
		
		m_PlayerName				= TextWidget.Cast( layoutRoot.FindAnyWidget("character_name_text") );
		
		m_Version.SetText( "Balkan Warlords" ); //I'll appreciate if you leave this text for credits
		
		GetGame().GetUIManager().ScreenFadeOut(0);

		SetFocus( null );
		
		Refresh();
		
		GetDayZGame().GetBacklit().MainMenu_OnShow();
	
		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );
		
		return layoutRoot;
	}
	
	override bool OnClick( Widget w, int x, int y, int button )
	{
		if( button == MouseState.LEFT )
		{
			if( w == m_Play )
			{
				//ConnectFromServerBrowser is the dayz function allows to connect any server
				m_LastFocusedButton = m_Play;
				g_Game.ConnectFromServerBrowser( "88.99.62.171", 2402, "" ); // place YOUR IP and Port here
				return true;
			}

			else if ( w == m_CustomizeCharacter )
			{
				OpenMenuCustomizeCharacter();
				return true;
			}
			else if ( w == m_SettingsButton )
			{
				OpenSettings();
				return true;
			}
			else if ( w == m_Exit )
			{
				Exit();
				return true;
			}
			else if ( w == custom_button1 )
			{
				GetGame().OpenURL("https://www.facebook.com/BalkanWarlords/"); //Replace my links to yours. Opens any URL Page in browser
				return true;
			}
			else if ( w == custom_button2 )
			{
				GetGame().OpenURL("https://discordapp.com/invite/prMaUey"); //Replace my links to yours. Opens any URL Page in browser
				return true;
			}			
		}
		return false;
	}
	
	bool IsFocusable( Widget w )
	{
		if( w )
		{
			if( w == m_Play || w == m_CustomizeCharacter || w == m_SettingsButton || w == m_Exit || w == custom_button1 || w == custom_button2 );
			{
				return true;
			}
		}
		return false;
	}
	
	override void Refresh()
	{
		string name;
		
		if( m_ScenePC )
		{
			OnChangeCharacter();
		}		
		
		m_Version.SetText( "Balkan Warlords" ); //I'll appreciate if you leave this text for credits
	}	

	override void OnShow()
	{
		SetFocus( null );
		OnChangeCharacter();
		return;
	}	
	override void Play()
	{
		g_Game.ConnectFromServerBrowser( "88.99.62.171", 2402, "" );  // place YOUR IP and Port here
	}	
}
