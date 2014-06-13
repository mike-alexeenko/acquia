<?php
//phpinfo();

$var01 = 0;
//($var01==0)


//a0-_.@(a0-.)tv - info
?>
<br>
<?php

	$subject = "mike.blink.alexeenko123@gmail.com"; 
	$pattern = '/^\w+([\w\.])*@\w{*}.\w{2-4}$/'; 


	$sdsd  = '/^\w+([\.\w]+)*\w@\w((\.\w)*\w+)*\.\w{2-4}$/';	
	
	$check_mail = preg_match($pattern, $subject); 

	echo($check_mail)? "true":"false"; ?>
	<br>
<?
	mysql_query("SET character_set_results = 'utf8', character_set_client = 'utf8', character_set_connection = 'utf8', character_set_database = 'utf8', character_set_server = 'utf8'", $db_connect);
	$db_connect = mysql_connect('127.0.0.1:33066', 'root', '');
	$db = mysql_select_db('shopik', $db_connect);

	
?>
<br>
<?php  
	$sql = mysql_query("SELECT * FROM products");
	var_dump($sql);
?>
<br>
<?php 

?> 