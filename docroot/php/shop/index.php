<?php
require('header.php');
//phpinfo();
?>
<html>
	<head>
 		<meta charset="utf-8"> 
	</head>
	<body>
<?
/*	$sql_query="
	SELECT 
		prod.title AS p_title,
		cat.title AS c_title
	FROM products AS prod
	INNER JOIN categories AS cat ON prod.cat_id=cat.id
	";	*/
if(isset($_GET['c']))
{
	$sql_query="SELECT * FROM products WHERE cat_id='".intval($_GET['c'])."'";
	$param="p";
}
elseif(isset($_GET['p']))
{
	$sql_query="SELECT * FROM products WHERE id='".$prodic=intval($_GET['p'])."'";
}
else
{
	$sql_query="SELECT * FROM categories";
	$param="c";
}

$sql=mysql_query($sql_query);

if($sql)
{
	if(!isset($prodic))
	{
		while($row = mysql_fetch_array($sql)) {
		    //echo $row["c_title"].' '.$row["p_title"].'<br/>';
		    ?>
		    <a href="./index.php?<?=$param?>=<?=$row["id"]?>"><?=$row["title"]?></a><br/>
		    <?
		}
	}
	else
	{
			$row = mysql_fetch_array($sql)
	?>

Супер продукт: 
	<? echo $row["title"];
	}
	mysql_free_result($sql);
	//echo "Сережа!";
}

?>
	</body>
</html>
<?

?>