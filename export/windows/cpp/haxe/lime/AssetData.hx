package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/DemoZone.oel", "assets/data/DemoZone.oel");
			type.set ("assets/data/DemoZone.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/DemoZone2.oel", "assets/data/DemoZone2.oel");
			type.set ("assets/data/DemoZone2.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/DemoZone2.oep", "assets/data/DemoZone2.oep");
			type.set ("assets/data/DemoZone2.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/test.cdb", "assets/data/test.cdb");
			type.set ("assets/data/test.cdb", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/TestZone.oel", "assets/data/TestZone.oel");
			type.set ("assets/data/TestZone.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/TestZone.oep", "assets/data/TestZone.oep");
			type.set ("assets/data/TestZone.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/gfx/test.ase", "assets/gfx/test.ase");
			type.set ("assets/gfx/test.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/gfx/test.png", "assets/gfx/test.png");
			type.set ("assets/gfx/test.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullets/shell.png", "assets/images/bullets/shell.png");
			type.set ("assets/images/bullets/shell.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/environment/demozone.ase", "assets/images/environment/demozone.ase");
			type.set ("assets/images/environment/demozone.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/environment/demozone.png", "assets/images/environment/demozone.png");
			type.set ("assets/images/environment/demozone.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/misc/blank.ase", "assets/images/misc/blank.ase");
			type.set ("assets/images/misc/blank.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/misc/blank.png", "assets/images/misc/blank.png");
			type.set ("assets/images/misc/blank.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/arms.png", "assets/images/standard-rev1/arms.png");
			type.set ("assets/images/standard-rev1/arms.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/core.png", "assets/images/standard-rev1/core.png");
			type.set ("assets/images/standard-rev1/core.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/flare.png", "assets/images/standard-rev1/flare.png");
			type.set ("assets/images/standard-rev1/flare.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/flaret.png", "assets/images/standard-rev1/flaret.png");
			type.set ("assets/images/standard-rev1/flaret.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/head.png", "assets/images/standard-rev1/head.png");
			type.set ("assets/images/standard-rev1/head.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/legs.png", "assets/images/standard-rev1/legs.png");
			type.set ("assets/images/standard-rev1/legs.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/pistol.png", "assets/images/standard-rev1/pistol.png");
			type.set ("assets/images/standard-rev1/pistol.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/standard-rev1/thruster.png", "assets/images/standard-rev1/thruster.png");
			type.set ("assets/images/standard-rev1/thruster.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/xml/build_schematic.xml", "assets/xml/build_schematic.xml");
			type.set ("assets/xml/build_schematic.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/xml/hangar.xml", "assets/xml/hangar.xml");
			type.set ("assets/xml/hangar.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/xml/main_menu.xml", "assets/xml/main_menu.xml");
			type.set ("assets/xml/main_menu.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("source/dat/parts.cdb", "source/dat/parts.cdb");
			type.set ("source/dat/parts.cdb", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("source/dat/Data.hx", "source/dat/Data.hx");
			type.set ("source/dat/Data.hx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
			type.set ("flixel/flixel-ui/img/box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
			type.set ("flixel/flixel-ui/img/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
			type.set ("flixel/flixel-ui/img/button_arrow_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
			type.set ("flixel/flixel-ui/img/button_arrow_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
			type.set ("flixel/flixel-ui/img/button_arrow_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
			type.set ("flixel/flixel-ui/img/button_arrow_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
			type.set ("flixel/flixel-ui/img/button_thin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
			type.set ("flixel/flixel-ui/img/button_toggle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
			type.set ("flixel/flixel-ui/img/check_box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
			type.set ("flixel/flixel-ui/img/check_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
			type.set ("flixel/flixel-ui/img/chrome.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
			type.set ("flixel/flixel-ui/img/chrome_flat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
			type.set ("flixel/flixel-ui/img/chrome_inset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
			type.set ("flixel/flixel-ui/img/chrome_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
			type.set ("flixel/flixel-ui/img/dropdown_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
			type.set ("flixel/flixel-ui/img/finger_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
			type.set ("flixel/flixel-ui/img/finger_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
			type.set ("flixel/flixel-ui/img/hilight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
			type.set ("flixel/flixel-ui/img/invis.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
			type.set ("flixel/flixel-ui/img/minus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
			type.set ("flixel/flixel-ui/img/plus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
			type.set ("flixel/flixel-ui/img/radio.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
			type.set ("flixel/flixel-ui/img/radio_dot.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
			type.set ("flixel/flixel-ui/img/swatch.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
			type.set ("flixel/flixel-ui/img/tab.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
			type.set ("flixel/flixel-ui/img/tab_back.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tooltip_arrow.png", "flixel/flixel-ui/img/tooltip_arrow.png");
			type.set ("flixel/flixel-ui/img/tooltip_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
			type.set ("flixel/flixel-ui/xml/defaults.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
			type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
			type.set ("flixel/flixel-ui/xml/default_popup.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
