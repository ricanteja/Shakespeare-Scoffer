#include <random>
#include <cstdio>

#include <curses.h>
#include <sapi.h>


int main()
{
	// Shakespeare's beautiful bust
	char* face[30] =
	{
		"..------..----------..`.:oyhddmmmmmmmmddhhy+::---....``...----...-.-.......-.-",
		"----...------...---.`./ydmmmmNNNNNNNNNNmmmddys+/---...```---------.-.-------.-",
		".....-........---..`-sdmmNNNNNNNNNNNNNNNNNmmddho:---...```.-.-.-------...-----",
		"-----------------.`:ydmNNNNNNNNNNNNNNNNNNNNmmddho:--..``` `-------.-.-----.-.-",
		"---..-.----..--..`-sdmNNNNNNNNNNNNMMMMNNNNNNmmdhyo:...``````.---------------.-",
		"-.---..------.````+hmmNNNNNNNNNNNNNMMNNNNNNNmdddho--..````````--------------.-",
		"-.----...-.-..```:sdmmNNNNNNNNNNNNNNNNNNNNNmmddhhs:```.````  ``.--------------",
		"----------...` ``+ydmmNNNNNNNNNNNNNNNNNNNNmmdhhhyso:````````   `...---------.-",
		"-........````````oydmmNNNNNNNNNNNNNNNNNNNNmmdhhhyso/..- `  ````````.---------:",
		"-------..-.-..``.syhddmmmmmmmmmmmmmmddddmmmdhhhhys+:---````` ```..````.-------",
		"----.-...--:-.` :soo+//ohdmddhyso+////+oosyhyhhhyso+:`.` ``.`````.```.``-::---",
		"-.--------..````/o++sss+/sddhs+/+shyyyoosooshdhyso+:.--...`````````.--```.----",
		"-------....-`` `:oosy-`:s+dmhosysydo-`//osyhhhhss+---..````````  `````.``.----",
		"-.---.......``` .oooyyshhymmyshmddddyyyoohmmdhyso/.-.` ``````.-.` `.`.-``..:-:",
		"------...`.-. ``.shhhhhddmNhyyhmNNmdhyyyhmmmdhso+:-..``..-...`.``  `````.``---",
		"------.-.`--.-.``sdmmNmmmNdhyhhdmmNmmmmmmmmdhyso/-...:/+/-```      ```````.---",
		"--------.`....```oydmmmmmmhhhhddmmmmmmmmmmdhyyso+/:-:oo+.         ``````.-----",
		"-...-----..--`` `/yhdmddNmhyyyyhmmmmmmmddhyyssso+//../s..` `    `    ``..-::-:",
		"------------``` `-shddhyys+/::++dmmmmmdhyysssoo+//-.//:`::.`  ``.``.````------",
		"---------:-.``````:syyys+---.-/syhddddhyyysso++/::./o:.:s/-.` ````.`..`.-::---",
		"-..---.-.---.`..``./+//:-/ys/:-:/+osyyyyssoo//++:.-//.:yhs:-.  ``````....-/:::",
		"-------------..`.....-:::/so///:-.---/oso++////:..:/--yddh/::.`    ``````.----",
		"----.-.-.-----.....`-oysososhhssyssssssoo+/::/-.-:/:+dmmdho++:-.`    ```.::---",
		"--------.-.-----...`.:oss+///+ossyyyso+////::...:+smNNmmdhoyy://.``````.--:---",
		"------.------------.`-//sydddhyyyyys+/://::--`-/ymMNNNNmddhmy+yo-````.----:---",
		"----.-------------:o+.--+osyhhyyo++//::/:...-/yNMMNNNNNmddNdsddo:   `.-:------",
		"-.-....---.-.-.--:hNd/..-+/+++oo+++/-::-`.-+ymMMMNNNNNNmmNmddmm+`    ``.--:---",
		"...-.-.-.....---/dNmdds-`--::/+/:::-....:+hNMMMNNNNNNNNNNmmmNmo.         `--:-",
		"----.-.-------.:mNNddmmd/.`.-/::.`..--/odNMMMNNNNNNNNNNNmmmNmo`            `--"
	};

	// Create our insult lists
	char* col_a[50] =
	{
		"artless",
		"bawdy",
		"beslubbering",
		"bootless",
		"churlish",
		"cockered",
		"clouted",
		"craven",
		"currish",
		"dankish",
		"dissembling",
		"droning",
		"errant",
		"fawning",
		"fobbing",
		"froward",
		"frothy",
		"gleeking",
		"goatish",
		"gorbellied",
		"impertinent",
		"infectious",
		"jarring",
		"loggerheaded",
		"lumpish",
		"mammering",
		"mangled",
		"mewling",
		"paunchy",
		"pribbling",
		"puking",
		"puny",
		"qualling",
		"rank",
		"reeky",
		"roguish",
		"ruttish",
		"saucy",
		"spleeny",
		"spongy",
		"surly",
		"tottering",
		"unmuzzled",
		"vain",
		"venomed",
		"villainous",
		"warped",
		"wayward",
		"weedy",
		"yeasty"
	};

	char* col_b[50] =
	{
		"base-court",
		"bat-fowling",
		"beef-witted",
		"beetle-headed",
		"boil-brained",
		"clapper-clawed",
		"clay-brained",
		"common-kissing",
		"crook-pated",
		"dismal-dreaming",
		"dizzy-eyed",
		"doghearted",
		"dread-bolted",
		"earth-vexing",
		"elf-skinned",
		"fat-kidneyed",
		"fen-sucked",
		"flap-mouthed",
		"fly-bitten",
		"folly-fallen",
		"fool-born",
		"full-gorged",
		"guts-griping",
		"half-faced",
		"hasty-witted",
		"hedge-born",
		"hell-hated",
		"idle-headed",
		"ill-breeding",
		"ill-nurtured",
		"knotty-pated",
		"milk-livered",
		"motley-minded",
		"onion-eyed",
		"plume-plucked",
		"pottle-deep",
		"pox-marked",
		"reeling-ripe",
		"rough-hewn",
		"rude-growing",
		"rump-fed",
		"shard-borne",
		"sheep-biting",
		"spur-galled",
		"swag-bellied",
		"tardy-gaited",
		"tickle-brained",
		"toad-spotted",
		"unchin-snouted",
		"weather-bitten"
	};

	char* col_c[50] =
	{
		"apple-john",
		"baggage",
		"barnacle",
		"bladder",
		"boar-pig",
		"bugbear",
		"bum-bailey",
		"canker-blossom",
		"clack-dish",
		"clotpole",
		"coxcomb",
		"codpiece",
		"death-token",
		"dewberry",
		"flap-dragon",
		"flax-wench",
		"flirt-gill",
		"foot-licker",
		"fustilarian",
		"giglet",
		"gudgeon",
		"haggard",
		"harpy",
		"hedge-pig",
		"horn-beast",
		"hugger-mugger",
		"joithead",
		"lewdster",
		"lout",
		"maggot-pie",
		"malt-worm",
		"mammet",
		"measle",
		"minnow",
		"miscreant",
		"moldwarp",
		"mumble-news",
		"nut-hook",
		"pigeon-egg",
		"pignut",
		"puttock",
		"pumpion",
		"ratsbane",
		"scut",
		"skainsmate",
		"strumpet",
		"varlot",
		"vassal",
		"whey-face",
		"wagtail"
	};

	ISpVoice* voice = NULL;
	// Initialize SAPI
	if(FAILED(::CoInitialize(NULL)))
		return -1;
	if(FAILED(CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&voice)))
		return -1;

	// Initialize PDCurses for input and set terminal size
	initscr();
	resize_term(40, 80);
	raw();
	keypad(stdscr, true);
	noecho();
	curs_set(0);

	// Set the border of the main window
	border(186, 186, 205, 196, 201, 187, 200, 188);

	// Draw Shakespeare's beautiful bust
	for(int i = 0; i < 29; i++)
		mvprintw(i + 1, 1, face[i]);

	// Display what we've drawn
	refresh();

	// Create a new window which will be used for drawing our messages and menu
	WINDOW* menu = newwin(11, 80, 29, 0);

	// Draw the border/menu and display it
	wborder(menu, 186, 186, 196, 205, 199, 182, 200, 188);
	mvwaddstr(menu, 9, 12, ">> ANY KEY = Insult | SPACE = Speak | ESC / Q = Quit <<");
	wrefresh(menu);

	std::random_device random;
	char insult_print[128];
	wchar_t insult_speak[128];
	int offset = 0;

	// Our main loop
	while(true)
	{
		// Discard what was left in the buffer and get input
		flushinp();
		char input = getch();

		// If the user pressed Q or Escape then quit
		if(input == 'q' || input == 27)
			break;
		// If user pressed any key except Space then generate new insult
		if(input != 32)
		{
			int a = random() % 50;
			int b = random() % 50;
			int c = random() % 50;

			// save the size of the string
			offset = sprintf(insult_print, "Thou %s %s %s!", col_a[a], col_b[b], col_c[c]);
			// Get center of new string
			offset = 40 - (offset / 2);
			swprintf(insult_speak, L"<speed=\"-10\">Thou %hs %hs <emph>%hs!</emph></speed>", col_a[a], col_b[b], col_c[c]);
		}

		wclear(menu);
		wborder(menu, 186, 186, 196, 205, 199, 182, 200, 188);
		// Move cursor to center and print our insult
		mvwprintw(menu, 5, offset, "%s", insult_print);

		mvwaddstr(menu, 9, 12, ">> ANY KEY = Insult | SPACE = Speak | ESC / Q = Quit <<");
		wrefresh(menu);

		// Get status of SAPI speech engine
		SPVOICESTATUS status;
		voice->GetStatus(&status, NULL);
		// If done speaking, speak again
		if(status.dwRunningState != SPRS_IS_SPEAKING)
			voice->Speak(insult_speak, SPF_IS_XML, NULL);
	}

	// Destroy voice and uininitialize SAPI
	voice->Release();
	voice = NULL;
	::CoUninitialize();
	// Delete our window and end PDCurses
	delwin(menu);
	endwin();

	return 0;
}