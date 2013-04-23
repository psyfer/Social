<?

class ConfigurationSettings {

	public static $ROOT = "/xampp/htdocs/blm/";
	public static $Host = "localhost";
	public static $Database = "blurbme";
	public static $Username = "root";
	public static $Password = "";
	public static $ErrorLog = "/home/blurbme/public_html/";

	public static $SMTP = "smtp1.slt.lk";
	public static $Admin_Email = "admin@blurbme.com";
	public static $WEBSITENAME = "http://localhost/blm/";

	//public static $PicDir = "C:/Dev/BLM/PROD/SRC/usrimgs"; // active or current image upload path
	public static $PicDir = "\\\\Titan\usrimgs"; // active or current image upload path
	public static $LATESTHOST = host; //current http img access location on of the below
	

	//image storage locations

	// SocialNet Images
	public static $S_LATEST_HOST = "/home/blurbme/public_html/imgload/";
	public static $S_LATEST_URL = host7;

	// Event Images
	public static $E_LATEST_HOST = "/home/blurbme/public_html/imgload/";
	public static $E_LATEST_URL = host7;

	// Lifestyle Images
	public static $L_LATEST_HOST = "/home/blurbme/public_html/imgload/";
	public static $L_LATEST_URL = host7;

	// Merchant Images
	public static $M_LATEST_HOST = "/home/blurbme/public_html/imgload/";
	public static $M_LATEST_URL = host7;

	// Roundup Images
	public static $R_LATEST_HOST = "/home/blurbme/public_html/imgload/";
	public static $R_LATEST_URL = host7;


	//these storage locations
	public static $host5 = "http://localhost:8080/blm/usrimgs/"; // respective img upload path	
	public static $host5_Path = "C:/Dev/BLM/PROD/SRC/usrimgs/"; // respective img upload path

	public static $host = "http://203.115.19.99:3305/blm/usrimgs/"; // respective img upload path  	
	public static $host_Path = "\\\\Titan\\usrimgs\\"; // respective img upload path  

	public static $host6 = "http://localhost/blm/usrimgs/"; // respective img upload path  
	public static $host6_Path = "C:/Dev/BLM/PROD/SRC/usrimgs/"; // respective img upload path	

	public static $host2 = "http://localhost:8080/blm"; // espective img upload path  "C:/Dev/BLM/PROD/SRC"

	public static $host3 = "http://100.100.100.123:3305/blm/test"; // respective img upload path  "\\\\titan\\test"
	
	public static $host7 = "http://www.blurbme.com/imgload/"; // respective img upload path
	public static $host7_Path = "/home/blurbme/public_html/imgload/"; // respective img upload path	

}

?>