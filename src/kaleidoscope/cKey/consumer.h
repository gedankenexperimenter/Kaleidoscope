// -*- c++ -*-

#pragma once

#include "HIDTables.h"
#include "kaleidoscope/Key.h"
#include "kaleidoscope/Key/Consumer.h"


namespace kaleidoscope {

// This namespace is for storing constants of type `Key`. The leading `c` stands for
// `constant` or `const`
// `const Key` object.
namespace cKey {

namespace Consumer {

constexpr Key::Consumer NumericKeyPad { HID_CONSUMER_NUMERIC_KEY_PAD };
constexpr Key::Consumer ProgrammableButtons { HID_CONSUMER_PROGRAMMABLE_BUTTONS };
constexpr Key::Consumer MicrophoneCa { HID_CONSUMER_MICROPHONE_CA };
constexpr Key::Consumer HeadphoneCa { HID_CONSUMER_HEADPHONE_CA };
constexpr Key::Consumer GraphicEqualizerCa { HID_CONSUMER_GRAPHIC_EQUALIZER_CA };

constexpr Key::Consumer Plus10 { HID_CONSUMER_PLUS_10 };
constexpr Key::Consumer Plus100 { HID_CONSUMER_PLUS_100 };
constexpr Key::Consumer AMSlashPM { HID_CONSUMER_AM_SLASH_PM };

constexpr Key::Consumer Power { HID_CONSUMER_POWER };
constexpr Key::Consumer Reset { HID_CONSUMER_RESET };
constexpr Key::Consumer Sleep { HID_CONSUMER_SLEEP };
constexpr Key::Consumer Sleep_After { HID_CONSUMER_SLEEP_AFTER };
constexpr Key::Consumer Sleep_Mode { HID_CONSUMER_SLEEP_MODE };
constexpr Key::Consumer Illumination { HID_CONSUMER_ILLUMINATION };
constexpr Key::Consumer Function_Buttons { HID_CONSUMER_FUNCTION_BUTTONS };

constexpr Key::Consumer Menu { HID_CONSUMER_MENU };
constexpr Key::Consumer MenuPick { HID_CONSUMER_MENU_PICK };
constexpr Key::Consumer MenuUp { HID_CONSUMER_MENU_UP };
constexpr Key::Consumer MenuDown { HID_CONSUMER_MENU_DOWN };
constexpr Key::Consumer MenuLeft { HID_CONSUMER_MENU_LEFT };
constexpr Key::Consumer MenuRight { HID_CONSUMER_MENU_RIGHT };
constexpr Key::Consumer MenuEscape { HID_CONSUMER_MENU_ESCAPE };
constexpr Key::Consumer MenuValueIncrease { HID_CONSUMER_MENU_VALUE_INCREASE };
constexpr Key::Consumer MenuValueDecrease { HID_CONSUMER_MENU_VALUE_DECREASE };

constexpr Key::Consumer DataOnScreen { HID_CONSUMER_DATA_ON_SCREEN };
constexpr Key::Consumer ClosedCaption { HID_CONSUMER_CLOSED_CAPTION };
constexpr Key::Consumer ClosedCaptionSelect { HID_CONSUMER_CLOSED_CAPTION_SELECT };
constexpr Key::Consumer VCRSlashTV { HID_CONSUMER_VCR_SLASH_TV };
constexpr Key::Consumer BroadcastMode { HID_CONSUMER_BROADCAST_MODE };
constexpr Key::Consumer SNapshot { HID_CONSUMER_SNAPSHOT };
constexpr Key::Consumer Still { HID_CONSUMER_STILL };

constexpr Key::Consumer Selection { HID_CONSUMER_SELECTION };
constexpr Key::Consumer AssignSelection { HID_CONSUMER_ASSIGN_SELECTION };
constexpr Key::Consumer ModeStep { HID_CONSUMER_MODE_STEP };
constexpr Key::Consumer RecallLast { HID_CONSUMER_RECALL_LAST };
constexpr Key::Consumer EnterChannel { HID_CONSUMER_ENTER_CHANNEL };
constexpr Key::Consumer OrderMovie { HID_CONSUMER_ORDER_MOVIE };
constexpr Key::Consumer Channel { HID_CONSUMER_CHANNEL };
constexpr Key::Consumer MediaSelection { HID_CONSUMER_MEDIA_SELECTION };
constexpr Key::Consumer MediaSelectComputer { HID_CONSUMER_MEDIA_SELECT_COMPUTER };
constexpr Key::Consumer MediaSelectTV { HID_CONSUMER_MEDIA_SELECT_TV };
constexpr Key::Consumer MediaSelectWww { HID_CONSUMER_MEDIA_SELECT_WWW };
constexpr Key::Consumer MediaSelectDvd { HID_CONSUMER_MEDIA_SELECT_DVD };
constexpr Key::Consumer MediaSelectTelephone { HID_CONSUMER_MEDIA_SELECT_TELEPHONE };
constexpr Key::Consumer MediaSelectProgramGuide { HID_CONSUMER_MEDIA_SELECT_PROGRAM_GUIDE };
constexpr Key::Consumer MediaSelectVideoPhone { HID_CONSUMER_MEDIA_SELECT_VIDEO_PHONE };
constexpr Key::Consumer MediaSelectGames { HID_CONSUMER_MEDIA_SELECT_GAMES };
constexpr Key::Consumer MediaSelectMessages { HID_CONSUMER_MEDIA_SELECT_MESSAGES };
constexpr Key::Consumer MediaSelectCd { HID_CONSUMER_MEDIA_SELECT_CD };
constexpr Key::Consumer MediaSelectVcr { HID_CONSUMER_MEDIA_SELECT_VCR };
constexpr Key::Consumer MediaSelectTuner { HID_CONSUMER_MEDIA_SELECT_TUNER };
constexpr Key::Consumer Quit { HID_CONSUMER_QUIT };
constexpr Key::Consumer Help { HID_CONSUMER_HELP };
constexpr Key::Consumer MediaSelectTape { HID_CONSUMER_MEDIA_SELECT_TAPE };
constexpr Key::Consumer MediaSelectCable { HID_CONSUMER_MEDIA_SELECT_CABLE };
constexpr Key::Consumer MediaSelectSatellite { HID_CONSUMER_MEDIA_SELECT_SATELLITE };
constexpr Key::Consumer MediaSelectSecurity { HID_CONSUMER_MEDIA_SELECT_SECURITY };
constexpr Key::Consumer MediaSelectHome { HID_CONSUMER_MEDIA_SELECT_HOME };
constexpr Key::Consumer MediaSelectCall { HID_CONSUMER_MEDIA_SELECT_CALL };
constexpr Key::Consumer ChannelIncrement { HID_CONSUMER_CHANNEL_INCREMENT };
constexpr Key::Consumer ChannelDecrement { HID_CONSUMER_CHANNEL_DECREMENT };
constexpr Key::Consumer MediaSelectSap { HID_CONSUMER_MEDIA_SELECT_SAP };

constexpr Key::Consumer VcrPlus { HID_CONSUMER_VCR_PLUS };
constexpr Key::Consumer Once { HID_CONSUMER_ONCE };
constexpr Key::Consumer Daily { HID_CONSUMER_DAILY };
constexpr Key::Consumer Weekly { HID_CONSUMER_WEEKLY };
constexpr Key::Consumer Monthly { HID_CONSUMER_MONTHLY };

constexpr Key::Consumer Play { HID_CONSUMER_PLAY };
constexpr Key::Consumer Pause { HID_CONSUMER_PAUSE };
constexpr Key::Consumer Record { HID_CONSUMER_RECORD };
constexpr Key::Consumer FastForward { HID_CONSUMER_FAST_FORWARD };
constexpr Key::Consumer Rewind { HID_CONSUMER_REWIND };
constexpr Key::Consumer ScanNextTrack { HID_CONSUMER_SCAN_NEXT_TRACK };
constexpr Key::Consumer ScanPreviousTrack { HID_CONSUMER_SCAN_PREVIOUS_TRACK };
constexpr Key::Consumer Stop { HID_CONSUMER_STOP };
constexpr Key::Consumer Eject { HID_CONSUMER_EJECT };
constexpr Key::Consumer RandomPlay { HID_CONSUMER_RANDOM_PLAY };
constexpr Key::Consumer SelectDisc { HID_CONSUMER_SELECT_DISC };
constexpr Key::Consumer EnterDiscMc { HID_CONSUMER_ENTER_DISC_MC };
constexpr Key::Consumer Repeat { HID_CONSUMER_REPEAT };
constexpr Key::Consumer Tracking { HID_CONSUMER_TRACKING };
constexpr Key::Consumer Track_Normal { HID_CONSUMER_TRACK_NORMAL };
constexpr Key::Consumer SlowTracking { HID_CONSUMER_SLOW_TRACKING };
constexpr Key::Consumer FrameForward { HID_CONSUMER_FRAME_FORWARD };
constexpr Key::Consumer FrameBack { HID_CONSUMER_FRAME_BACK };
constexpr Key::Consumer Mark { HID_CONSUMER_MARK };
constexpr Key::Consumer ClearMark { HID_CONSUMER_CLEAR_MARK };
constexpr Key::Consumer RepeatFromMark { HID_CONSUMER_REPEAT_FROM_MARK };
constexpr Key::Consumer ReturnTo_Mark { HID_CONSUMER_RETURN_TO_MARK };
constexpr Key::Consumer SearchMarkForward { HID_CONSUMER_SEARCH_MARK_FORWARD };
constexpr Key::Consumer SearchMarkBackwards { HID_CONSUMER_SEARCH_MARK_BACKWARDS };
constexpr Key::Consumer CounterReset { HID_CONSUMER_COUNTER_RESET };
constexpr Key::Consumer ShowCounter { HID_CONSUMER_SHOW_COUNTER };
constexpr Key::Consumer TrackingIncrement { HID_CONSUMER_TRACKING_INCREMENT };
constexpr Key::Consumer TrackingDecrement { HID_CONSUMER_TRACKING_DECREMENT };
constexpr Key::Consumer StopSlashEject { HID_CONSUMER_STOP_SLASH_EJECT };
constexpr Key::Consumer PlaySlashPause { HID_CONSUMER_PLAY_SLASH_PAUSE };
constexpr Key::Consumer PlaySlashSkip { HID_CONSUMER_PLAY_SLASH_SKIP };
constexpr Key::Consumer Volume { HID_CONSUMER_VOLUME };
constexpr Key::Consumer Balance { HID_CONSUMER_BALANCE };
constexpr Key::Consumer Mute { HID_CONSUMER_MUTE };
constexpr Key::Consumer Bass { HID_CONSUMER_BASS };
constexpr Key::Consumer Treble { HID_CONSUMER_TREBLE };
constexpr Key::Consumer BassBoost { HID_CONSUMER_BASS_BOOST };
constexpr Key::Consumer SurroundMode { HID_CONSUMER_SURROUND_MODE };
constexpr Key::Consumer Loudness { HID_CONSUMER_LOUDNESS };
constexpr Key::Consumer Mpx { HID_CONSUMER_MPX };
constexpr Key::Consumer VolumeIncrement { HID_CONSUMER_VOLUME_INCREMENT };


constexpr Key::Consumer VolumeDecrement { HID_CONSUMER_VOLUME_DECREMENT };

constexpr Key::Consumer SpeedSelect { HID_CONSUMER_SPEED_SELECT };
constexpr Key::Consumer PlaybackSpeed { HID_CONSUMER_PLAYBACK_SPEED };
constexpr Key::Consumer StandardPlay { HID_CONSUMER_STANDARD_PLAY };
constexpr Key::Consumer LongPlay { HID_CONSUMER_LONG_PLAY };
constexpr Key::Consumer ExtendedPlay { HID_CONSUMER_EXTENDED_PLAY };
constexpr Key::Consumer Slow { HID_CONSUMER_SLOW };

constexpr Key::Consumer FanEnable { HID_CONSUMER_FAN_ENABLE };
constexpr Key::Consumer FanSpeed { HID_CONSUMER_FAN_SPEED };
constexpr Key::Consumer LightEnable { HID_CONSUMER_LIGHT_ENABLE };
constexpr Key::Consumer LightIlluminationLevel { HID_CONSUMER_LIGHT_ILLUMINATION_LEVEL };
constexpr Key::Consumer ClimateControlEnable { HID_CONSUMER_CLIMATE_CONTROL_ENABLE };
constexpr Key::Consumer RoomTemperature { HID_CONSUMER_ROOM_TEMPERATURE };
constexpr Key::Consumer SecurityEnable { HID_CONSUMER_SECURITY_ENABLE };
constexpr Key::Consumer FireAlarm { HID_CONSUMER_FIRE_ALARM };
constexpr Key::Consumer PoliceAlarm { HID_CONSUMER_POLICE_ALARM };
constexpr Key::Consumer Proximity { HID_CONSUMER_PROXIMITY };
constexpr Key::Consumer Motion { HID_CONSUMER_MOTION };
constexpr Key::Consumer DuressAlarm { HID_CONSUMER_DURESS_ALARM };
constexpr Key::Consumer HoldupAlarm { HID_CONSUMER_HOLDUP_ALARM };
constexpr Key::Consumer MedicalAlarm { HID_CONSUMER_MEDICAL_ALARM };

constexpr Key::Consumer BalanceRight { HID_CONSUMER_BALANCE_RIGHT };
constexpr Key::Consumer BalanceLeft { HID_CONSUMER_BALANCE_LEFT };
constexpr Key::Consumer BassIncrement { HID_CONSUMER_BASS_INCREMENT };
constexpr Key::Consumer BassDecrement { HID_CONSUMER_BASS_DECREMENT };
constexpr Key::Consumer TrebleIncrement { HID_CONSUMER_TREBLE_INCREMENT };
constexpr Key::Consumer TrebleDecrement { HID_CONSUMER_TREBLE_DECREMENT };

constexpr Key::Consumer SpeakerSystem { HID_CONSUMER_SPEAKER_SYSTEM };
constexpr Key::Consumer ChannelLeft { HID_CONSUMER_CHANNEL_LEFT };
constexpr Key::Consumer ChannelRight { HID_CONSUMER_CHANNEL_RIGHT };
constexpr Key::Consumer ChannelCenter { HID_CONSUMER_CHANNEL_CENTER };
constexpr Key::Consumer ChannelFront { HID_CONSUMER_CHANNEL_FRONT };
constexpr Key::Consumer ChannelCenterFront { HID_CONSUMER_CHANNEL_CENTER_FRONT };
constexpr Key::Consumer ChannelSide { HID_CONSUMER_CHANNEL_SIDE };
constexpr Key::Consumer ChannelSurround { HID_CONSUMER_CHANNEL_SURROUND };
constexpr Key::Consumer ChannelLowFrequencyEnhancement { HID_CONSUMER_CHANNEL_LOW_FREQUENCY_ENHANCEMENT };
constexpr Key::Consumer ChannelTop { HID_CONSUMER_CHANNEL_TOP };
constexpr Key::Consumer ChannelUnknown { HID_CONSUMER_CHANNEL_UNKNOWN };

constexpr Key::Consumer SubChannel { HID_CONSUMER_SUB_CHANNEL };
constexpr Key::Consumer SubChannelIncrement { HID_CONSUMER_SUB_CHANNEL_INCREMENT };
constexpr Key::Consumer SubChannelDecrement { HID_CONSUMER_SUB_CHANNEL_DECREMENT };
constexpr Key::Consumer AlternateAudioIncrement { HID_CONSUMER_ALTERNATE_AUDIO_INCREMENT };
constexpr Key::Consumer AlternateAudioDecrement { HID_CONSUMER_ALTERNATE_AUDIO_DECREMENT };

constexpr Key::Consumer Application_Launch_Buttons { HID_CONSUMER_APPLICATION_LAUNCH_BUTTONS };
constexpr Key::Consumer AL_Launch_Button_Configuration_Tool { HID_CONSUMER_AL_LAUNCH_BUTTON_CONFIGURATION_TOOL };
constexpr Key::Consumer AL_Programmable_Button_Configuration { HID_CONSUMER_AL_PROGRAMMABLE_BUTTON_CONFIGURATION };
constexpr Key::Consumer AL_Consumer_Control_Configuration { HID_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION };
constexpr Key::Consumer AL_Word_Processor { HID_CONSUMER_AL_WORD_PROCESSOR };
constexpr Key::Consumer AL_Text_Editor { HID_CONSUMER_AL_TEXT_EDITOR };
constexpr Key::Consumer AL_Spreadsheet { HID_CONSUMER_AL_SPREADSHEET };
constexpr Key::Consumer AL_Graphics_Editor { HID_CONSUMER_AL_GRAPHICS_EDITOR };
constexpr Key::Consumer AL_Presentation_App { HID_CONSUMER_AL_PRESENTATION_APP };
constexpr Key::Consumer AL_Database_App { HID_CONSUMER_AL_DATABASE_APP };
constexpr Key::Consumer AL_Email_Reader { HID_CONSUMER_AL_EMAIL_READER };
constexpr Key::Consumer AL_Newsreader { HID_CONSUMER_AL_NEWSREADER };
constexpr Key::Consumer AL_Voicemail { HID_CONSUMER_AL_VOICEMAIL };
constexpr Key::Consumer AL_Contacts_Slash_Address_Book { HID_CONSUMER_AL_CONTACTS_SLASH_ADDRESS_BOOK };
constexpr Key::Consumer AL_Calendar_Slash_Schedule { HID_CONSUMER_AL_CALENDAR_SLASH_SCHEDULE };
constexpr Key::Consumer AL_Task_Slash_Project_Manager { HID_CONSUMER_AL_TASK_SLASH_PROJECT_MANAGER };
constexpr Key::Consumer AL_Log_Slash_Journal_Slash_Timecard { HID_CONSUMER_AL_LOG_SLASH_JOURNAL_SLASH_TIMECARD };
constexpr Key::Consumer AL_Checkbook_Slash_Finance { HID_CONSUMER_AL_CHECKBOOK_SLASH_FINANCE };
constexpr Key::Consumer AL_Calculator { HID_CONSUMER_AL_CALCULATOR };
constexpr Key::Consumer AL_AVCaptureSlashPlayback { HID_CONSUMER_AL_A_SLASH_V_CAPTURE_SLASH_PLAYBACK };
constexpr Key::Consumer AL_Local_MachineBrowser { HID_CONSUMER_AL_LOCAL_MACHINE_BROWSER };
constexpr Key::Consumer AL_Lan_SlashWanBrowser { HID_CONSUMER_AL_LAN_SLASH_WAN_BROWSER };
constexpr Key::Consumer AL_InternetBrowser { HID_CONSUMER_AL_INTERNET_BROWSER };
constexpr Key::Consumer AL_RemoteNetworkingSlashIspConnect { HID_CONSUMER_AL_REMOTE_NETWORKING_SLASH_ISP_CONNECT };
constexpr Key::Consumer AL_NetworkConference { HID_CONSUMER_AL_NETWORK_CONFERENCE };
constexpr Key::Consumer AL_NetworkChat { HID_CONSUMER_AL_NETWORK_CHAT };
constexpr Key::Consumer AL_TelephonySlashDialer { HID_CONSUMER_AL_TELEPHONY_SLASH_DIALER };
constexpr Key::Consumer AL_Logon { HID_CONSUMER_AL_LOGON };
constexpr Key::Consumer AL_Logoff { HID_CONSUMER_AL_LOGOFF };
constexpr Key::Consumer AL_LogonSlashLogoff { HID_CONSUMER_AL_LOGON_SLASH_LOGOFF };
constexpr Key::Consumer AL_TerminalLockSlashScreensaver { HID_CONSUMER_AL_TERMINAL_LOCK_SLASH_SCREENSAVER };
constexpr Key::Consumer AL_ControlPanel { HID_CONSUMER_AL_CONTROL_PANEL };
constexpr Key::Consumer AL_CommandLineProcessorSlashRun { HID_CONSUMER_AL_COMMAND_LINE_PROCESSOR_SLASH_RUN };
constexpr Key::Consumer AL_ProcessSlashTask_Manager { HID_CONSUMER_AL_PROCESS_SLASH_TASK_MANAGER };
constexpr Key::Consumer AL_SelectTaskSlashApplication { HID_CONSUMER_AL_SELECT_TASK_SLASH_APPLICATION };
constexpr Key::Consumer AL_NextTaskSlashApplication { HID_CONSUMER_AL_NEXT_TASK_SLASH_APPLICATION };
constexpr Key::Consumer AL_PreviousTaskSlashApplication { HID_CONSUMER_AL_PREVIOUS_TASK_SLASH_APPLICATION };
constexpr Key::Consumer AL_PreemptiveHaltTaskSlashApplication { HID_CONSUMER_AL_PREEMPTIVE_HALT_TASK_SLASH_APPLICATION };
constexpr Key::Consumer AL_IntegratedHelpCenter { HID_CONSUMER_AL_INTEGRATED_HELP_CENTER };
constexpr Key::Consumer AL_Documents { HID_CONSUMER_AL_DOCUMENTS };
constexpr Key::Consumer AL_Thesaurus { HID_CONSUMER_AL_THESAURUS };
constexpr Key::Consumer AL_Dictionary { HID_CONSUMER_AL_DICTIONARY };
constexpr Key::Consumer AL_Desktop { HID_CONSUMER_AL_DESKTOP };
constexpr Key::Consumer AL_SpellCheck { HID_CONSUMER_AL_SPELL_CHECK };
constexpr Key::Consumer AL_GrammarCheck { HID_CONSUMER_AL_GRAMMAR_CHECK };
constexpr Key::Consumer AL_WirelessStatus { HID_CONSUMER_AL_WIRELESS_STATUS };
constexpr Key::Consumer AL_KeyboardLayout { HID_CONSUMER_AL_KEYBOARD_LAYOUT };
constexpr Key::Consumer AL_VirusProtection { HID_CONSUMER_AL_VIRUS_PROTECTION };
constexpr Key::Consumer AL_Encryption { HID_CONSUMER_AL_ENCRYPTION };
constexpr Key::Consumer AL_ScreenSaver { HID_CONSUMER_AL_SCREEN_SAVER };
constexpr Key::Consumer AL_Alarms { HID_CONSUMER_AL_ALARMS };
constexpr Key::Consumer AL_Clock { HID_CONSUMER_AL_CLOCK };
constexpr Key::Consumer AL_FileBrowser { HID_CONSUMER_AL_FILE_BROWSER };
constexpr Key::Consumer AL_PowerStatus { HID_CONSUMER_AL_POWER_STATUS };
constexpr Key::Consumer AL_ImageBrowser { HID_CONSUMER_AL_IMAGE_BROWSER };
constexpr Key::Consumer AL_AudioBrowser { HID_CONSUMER_AL_AUDIO_BROWSER };
constexpr Key::Consumer AL_MovieBrowser { HID_CONSUMER_AL_MOVIE_BROWSER };
constexpr Key::Consumer AL_DigitalRightsManager { HID_CONSUMER_AL_DIGITAL_RIGHTS_MANAGER };
constexpr Key::Consumer AL_DigitalWallet { HID_CONSUMER_AL_DIGITAL_WALLET };

constexpr Key::Consumer AL_InstantMessaging { HID_CONSUMER_AL_INSTANT_MESSAGING };
constexpr Key::Consumer AL_OemFeaturesSlashTipsSlashTUTORIALBrowser { HID_CONSUMER_AL_OEM_FEATURES_SLASH__TIPS_SLASH_TUTORIAL_BROWSER };
constexpr Key::Consumer AL_OemHelp { HID_CONSUMER_AL_OEM_HELP };
constexpr Key::Consumer AL_OnlineCommunity { HID_CONSUMER_AL_ONLINE_COMMUNITY };
constexpr Key::Consumer AL_Entertainment_Content_Browser { HID_CONSUMER_AL_ENTERTAINMENT_CONTENT_BROWSER };
constexpr Key::Consumer AL_OnlineShoppingBrowser { HID_CONSUMER_AL_ONLINE_SHOPPING_BROWSER };
constexpr Key::Consumer AL_SmartcardInformationSlashHelp { HID_CONSUMER_AL_SMARTCARD_INFORMATION_SLASH_HELP };
constexpr Key::Consumer AL_MarketMonitorSlashFinanceBrowser { HID_CONSUMER_AL_MARKET_MONITOR_SLASH_FINANCE_BROWSER };
constexpr Key::Consumer AL_CustomizedCorporateNewsBrowser { HID_CONSUMER_AL_CUSTOMIZED_CORPORATE_NEWS_BROWSER };
constexpr Key::Consumer AL_OnlineActivityBrowser { HID_CONSUMER_AL_ONLINE_ACTIVITY_BROWSER };
constexpr Key::Consumer AL_ResearchSlashSearchBrowser { HID_CONSUMER_AL_RESEARCH_SLASH_SEARCH_BROWSER };
constexpr Key::Consumer AL_AudioPlayer { HID_CONSUMER_AL_AUDIO_PLAYER };

constexpr Key::Consumer GenericGuiApplicationControls { HID_CONSUMER_GENERIC_GUI_APPLICATION_CONTROLS };
constexpr Key::Consumer AC_New { HID_CONSUMER_AC_NEW };
constexpr Key::Consumer AC_Open { HID_CONSUMER_AC_OPEN };
constexpr Key::Consumer AC_Close { HID_CONSUMER_AC_CLOSE };
constexpr Key::Consumer AC_Exit { HID_CONSUMER_AC_EXIT };
constexpr Key::Consumer AC_Maximize { HID_CONSUMER_AC_MAXIMIZE };
constexpr Key::Consumer AC_Minimize { HID_CONSUMER_AC_MINIMIZE };
constexpr Key::Consumer AC_Save { HID_CONSUMER_AC_SAVE };
constexpr Key::Consumer AC_Print { HID_CONSUMER_AC_PRINT };
constexpr Key::Consumer AC_Properties { HID_CONSUMER_AC_PROPERTIES };
constexpr Key::Consumer AC_Undo { HID_CONSUMER_AC_UNDO };
constexpr Key::Consumer AC_Copy { HID_CONSUMER_AC_COPY };
constexpr Key::Consumer AC_Cut { HID_CONSUMER_AC_CUT };
constexpr Key::Consumer AC_Paste { HID_CONSUMER_AC_PASTE };
constexpr Key::Consumer AC_SelectAll { HID_CONSUMER_AC_SELECT_ALL };
constexpr Key::Consumer AC_Find { HID_CONSUMER_AC_FIND };
constexpr Key::Consumer AC_FindAndReplace { HID_CONSUMER_AC_FIND_AND_REPLACE };
constexpr Key::Consumer AC_Search { HID_CONSUMER_AC_SEARCH };
constexpr Key::Consumer AC_GoTo { HID_CONSUMER_AC_GO_TO };
constexpr Key::Consumer AC_Home { HID_CONSUMER_AC_HOME };
constexpr Key::Consumer AC_Back { HID_CONSUMER_AC_BACK };
constexpr Key::Consumer AC_Forward { HID_CONSUMER_AC_FORWARD };
constexpr Key::Consumer AC_Stop { HID_CONSUMER_AC_STOP };
constexpr Key::Consumer AC_Refresh { HID_CONSUMER_AC_REFRESH };
constexpr Key::Consumer AC_PreviousLink { HID_CONSUMER_AC_PREVIOUS_LINK };
constexpr Key::Consumer AC_NextLink { HID_CONSUMER_AC_NEXT_LINK };
constexpr Key::Consumer AC_Bookmarks { HID_CONSUMER_AC_BOOKMARKS };
constexpr Key::Consumer AC_History { HID_CONSUMER_AC_HISTORY };
constexpr Key::Consumer AC_Subscriptions { HID_CONSUMER_AC_SUBSCRIPTIONS };
constexpr Key::Consumer AC_ZoomIn { HID_CONSUMER_AC_ZOOM_IN };
constexpr Key::Consumer AC_ZoomOut { HID_CONSUMER_AC_ZOOM_OUT };
constexpr Key::Consumer AC_Zoom { HID_CONSUMER_AC_ZOOM };
constexpr Key::Consumer AC_FullSCreenView { HID_CONSUMER_AC_FULL_SCREEN_VIEW };
constexpr Key::Consumer AC_NormalView { HID_CONSUMER_AC_NORMAL_VIEW };
constexpr Key::Consumer AC_ViewToggle { HID_CONSUMER_AC_VIEW_TOGGLE };
constexpr Key::Consumer AC_ScrollUp { HID_CONSUMER_AC_SCROLL_UP };
constexpr Key::Consumer AC_ScrollDown { HID_CONSUMER_AC_SCROLL_DOWN };
constexpr Key::Consumer AC_Scroll { HID_CONSUMER_AC_SCROLL };
constexpr Key::Consumer AC_PanLeft { HID_CONSUMER_AC_PAN_LEFT };
constexpr Key::Consumer AC_PanRight { HID_CONSUMER_AC_PAN_RIGHT };
constexpr Key::Consumer AC_Pan { HID_CONSUMER_AC_PAN };
constexpr Key::Consumer AC_NewWindow { HID_CONSUMER_AC_NEW_WINDOW };
constexpr Key::Consumer AC_TileHorizontally { HID_CONSUMER_AC_TILE_HORIZONTALLY };
constexpr Key::Consumer AC_TileVertically { HID_CONSUMER_AC_TILE_VERTICALLY };
constexpr Key::Consumer AC_Format { HID_CONSUMER_AC_FORMAT };
constexpr Key::Consumer AC_Edit { HID_CONSUMER_AC_EDIT };
constexpr Key::Consumer AC_Bold { HID_CONSUMER_AC_BOLD };
constexpr Key::Consumer AC_Italics { HID_CONSUMER_AC_ITALICS };
constexpr Key::Consumer AC_Underline { HID_CONSUMER_AC_UNDERLINE };
constexpr Key::Consumer AC_Strikethrough { HID_CONSUMER_AC_STRIKETHROUGH };
constexpr Key::Consumer AC_Subscript { HID_CONSUMER_AC_SUBSCRIPT };
constexpr Key::Consumer AC_Superscript { HID_CONSUMER_AC_SUPERSCRIPT };
constexpr Key::Consumer AC_AllCaps { HID_CONSUMER_AC_ALL_CAPS };
constexpr Key::Consumer AC_Rotate { HID_CONSUMER_AC_ROTATE };
constexpr Key::Consumer AC_Resize { HID_CONSUMER_AC_RESIZE };
constexpr Key::Consumer AC_FlipHorizontal { HID_CONSUMER_AC_FLIP_HORIZONTAL };
constexpr Key::Consumer AC_FlipVertical { HID_CONSUMER_AC_FLIP_VERTICAL };
constexpr Key::Consumer AC_MirrorHorizontal { HID_CONSUMER_AC_MIRROR_HORIZONTAL };
constexpr Key::Consumer AC_MirrorVertical { HID_CONSUMER_AC_MIRROR_VERTICAL };
constexpr Key::Consumer AC_FontSelect { HID_CONSUMER_AC_FONT_SELECT };
constexpr Key::Consumer AC_FontColor { HID_CONSUMER_AC_FONT_COLOR };
constexpr Key::Consumer AC_FontSize { HID_CONSUMER_AC_FONT_SIZE };
constexpr Key::Consumer AC_JustifyLeft { HID_CONSUMER_AC_JUSTIFY_LEFT };
constexpr Key::Consumer AC_JustifyCenterH { HID_CONSUMER_AC_JUSTIFY_CENTER_H };
constexpr Key::Consumer AC_JustifyRight { HID_CONSUMER_AC_JUSTIFY_RIGHT };
constexpr Key::Consumer AC_JustifyBlockH { HID_CONSUMER_AC_JUSTIFY_BLOCK_H };
constexpr Key::Consumer AC_JustifyTop { HID_CONSUMER_AC_JUSTIFY_TOP };
constexpr Key::Consumer AC_JustifyCenterV { HID_CONSUMER_AC_JUSTIFY_CENTER_V };
constexpr Key::Consumer AC_JustifyBottom { HID_CONSUMER_AC_JUSTIFY_BOTTOM };
constexpr Key::Consumer AC_JustifyBlockV { HID_CONSUMER_AC_JUSTIFY_BLOCK_V };
constexpr Key::Consumer AC_IndentDecrease { HID_CONSUMER_AC_INDENT_DECREASE };
constexpr Key::Consumer AC_IndentIncrease { HID_CONSUMER_AC_INDENT_INCREASE };
constexpr Key::Consumer AC_NumberedList { HID_CONSUMER_AC_NUMBERED_LIST };
constexpr Key::Consumer AC_RestartNumbering { HID_CONSUMER_AC_RESTART_NUMBERING };
constexpr Key::Consumer AC_BulletedList { HID_CONSUMER_AC_BULLETED_LIST };
constexpr Key::Consumer AC_Promote { HID_CONSUMER_AC_PROMOTE };
constexpr Key::Consumer AC_Demote { HID_CONSUMER_AC_DEMOTE };
constexpr Key::Consumer AC_Yes { HID_CONSUMER_AC_YES };
constexpr Key::Consumer AC_No { HID_CONSUMER_AC_NO };
constexpr Key::Consumer AC_Cancel { HID_CONSUMER_AC_CANCEL };
constexpr Key::Consumer AC_Catalog { HID_CONSUMER_AC_CATALOG };
constexpr Key::Consumer AC_BuySlashCheckout { HID_CONSUMER_AC_BUY_SLASH_CHECKOUT };
constexpr Key::Consumer AC_AddToCart { HID_CONSUMER_AC_ADD_TO_CART };
constexpr Key::Consumer AC_Expand { HID_CONSUMER_AC_EXPAND };
constexpr Key::Consumer AC_ExpandAll { HID_CONSUMER_AC_EXPAND_ALL };
constexpr Key::Consumer AC_Collapse { HID_CONSUMER_AC_COLLAPSE };
constexpr Key::Consumer AC_CollapseAll { HID_CONSUMER_AC_COLLAPSE_ALL };
constexpr Key::Consumer AC_PrintPreview { HID_CONSUMER_AC_PRINT_PREVIEW };
constexpr Key::Consumer AC_PasteSpecial { HID_CONSUMER_AC_PASTE_SPECIAL };
constexpr Key::Consumer AC_InsertMode { HID_CONSUMER_AC_INSERT_MODE };
constexpr Key::Consumer AC_Delete { HID_CONSUMER_AC_DELETE };
constexpr Key::Consumer AC_Lock { HID_CONSUMER_AC_LOCK };
constexpr Key::Consumer AC_Unlock { HID_CONSUMER_AC_UNLOCK };
constexpr Key::Consumer AC_Protect { HID_CONSUMER_AC_PROTECT };
constexpr Key::Consumer AC_Unprotect { HID_CONSUMER_AC_UNPROTECT };
constexpr Key::Consumer AC_AttachComment { HID_CONSUMER_AC_ATTACH_COMMENT };
constexpr Key::Consumer AC_DeleteComment { HID_CONSUMER_AC_DELETE_COMMENT };
constexpr Key::Consumer AC_ViewComment { HID_CONSUMER_AC_VIEW_COMMENT };
constexpr Key::Consumer AC_SelectWord { HID_CONSUMER_AC_SELECT_WORD };
constexpr Key::Consumer AC_SelectSentence { HID_CONSUMER_AC_SELECT_SENTENCE };
constexpr Key::Consumer AC_SelectParagraph { HID_CONSUMER_AC_SELECT_PARAGRAPH };
constexpr Key::Consumer AC_SelectColumn { HID_CONSUMER_AC_SELECT_COLUMN };
constexpr Key::Consumer AC_SelectRow { HID_CONSUMER_AC_SELECT_ROW };
constexpr Key::Consumer AC_SelectTable { HID_CONSUMER_AC_SELECT_TABLE };
constexpr Key::Consumer AC_SelectObject { HID_CONSUMER_AC_SELECT_OBJECT };
constexpr Key::Consumer AC_RedoSlashRepeat { HID_CONSUMER_AC_REDO_SLASH_REPEAT };
constexpr Key::Consumer AC_Sort { HID_CONSUMER_AC_SORT };
constexpr Key::Consumer AC_Sort_Ascending { HID_CONSUMER_AC_SORT_ASCENDING };
constexpr Key::Consumer AC_Sort_Descending { HID_CONSUMER_AC_SORT_DESCENDING };
constexpr Key::Consumer AC_Filter { HID_CONSUMER_AC_FILTER };
constexpr Key::Consumer AC_SetClock { HID_CONSUMER_AC_SET_CLOCK };
constexpr Key::Consumer AC_ViewClock { HID_CONSUMER_AC_VIEW_CLOCK };
constexpr Key::Consumer AC_SelectTimeZone { HID_CONSUMER_AC_SELECT_TIME_ZONE };
constexpr Key::Consumer AC_EditTimeZones { HID_CONSUMER_AC_EDIT_TIME_ZONES };
constexpr Key::Consumer AC_SetAlarm { HID_CONSUMER_AC_SET_ALARM };
constexpr Key::Consumer AC_ClearAlarm { HID_CONSUMER_AC_CLEAR_ALARM };
constexpr Key::Consumer AC_SnoozeAlarm { HID_CONSUMER_AC_SNOOZE_ALARM };
constexpr Key::Consumer AC_ResetAlarm { HID_CONSUMER_AC_RESET_ALARM };
constexpr Key::Consumer AC_Synchronize { HID_CONSUMER_AC_SYNCHRONIZE };
constexpr Key::Consumer AC_SendSlashReceive { HID_CONSUMER_AC_SEND_SLASH_RECEIVE };
constexpr Key::Consumer AC_SendTo { HID_CONSUMER_AC_SEND_TO };
constexpr Key::Consumer AC_Reply { HID_CONSUMER_AC_REPLY };
constexpr Key::Consumer AC_ReplyAll { HID_CONSUMER_AC_REPLY_ALL };
constexpr Key::Consumer AC_ForwardMsg { HID_CONSUMER_AC_FORWARD_MSG };
constexpr Key::Consumer AC_Send { HID_CONSUMER_AC_SEND };
constexpr Key::Consumer AC_AttachFile { HID_CONSUMER_AC_ATTACH_FILE };
constexpr Key::Consumer AC_Upload { HID_CONSUMER_AC_UPLOAD };
constexpr Key::Consumer AC_Download { HID_CONSUMER_AC_DOWNLOAD };
constexpr Key::Consumer AC_SetBorders { HID_CONSUMER_AC_SET_BORDERS };
constexpr Key::Consumer AC_InsertRow { HID_CONSUMER_AC_INSERT_ROW };
constexpr Key::Consumer AC_InsertColumn { HID_CONSUMER_AC_INSERT_COLUMN };
constexpr Key::Consumer AC_InsertFile { HID_CONSUMER_AC_INSERT_FILE };
constexpr Key::Consumer AC_InsertPicture { HID_CONSUMER_AC_INSERT_PICTURE };
constexpr Key::Consumer AC_InsertObject { HID_CONSUMER_AC_INSERT_OBJECT };
constexpr Key::Consumer AC_InsertSymbol { HID_CONSUMER_AC_INSERT_SYMBOL };
constexpr Key::Consumer AC_SaveandClose { HID_CONSUMER_AC_SAVE_AND_CLOSE };
constexpr Key::Consumer AC_Rename { HID_CONSUMER_AC_RENAME };
constexpr Key::Consumer AC_Merge { HID_CONSUMER_AC_MERGE };
constexpr Key::Consumer AC_Split { HID_CONSUMER_AC_SPLIT };
constexpr Key::Consumer AC_Distribute_Horizontally { HID_CONSUMER_AC_DISTRIBUTE_HORIZONTALLY };
constexpr Key::Consumer AC_Distribute_Vertically { HID_CONSUMER_AC_DISTRIBUTE_VERTICALLY };

} // namespace consumer {

} // namespace cKey {

} // namespace kaleidoscope {
