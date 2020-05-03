<?php
$row = $POST['row'];
$maxdb = $POST['maxdb'];
$peaks = $_POST['peaks'];
$col = $_POST['col']
$today = date("Y-m-d H:i:s");
$record = $today . "," .$row . " " . $col." " .$peaks . " " . $maxdb ."\n";

$file = "putty.txt";
if(file_exists($file))
	$fp = fopen($file, "a");
else
	$fp = fopen($file, "w");
fwrite($fp, $record);
fclose($fp);
echo " From e1900312\n";
?>
