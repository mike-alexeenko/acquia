<?php
ini_set('mbstring.internal_encoding','UTF-8');
header('content-type: text/html; charset: utf-8');

$connect=mysql_connect('127.0.0.1:33066', 'root' , '' ); 
mysql_set_charset('utf8',$connect);
$db_connect=mysql_select_db('shopik', $connect);

//phpinfo();
?>