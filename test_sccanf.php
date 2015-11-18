<?php
// getting the serial number
list($serial) = sscanf("SN/2350001", "SN/%d");
var_dump($serial,__FILE__,__LINE__);
// and the date of manufacturing
$mandate = "January 01 2000";
list($month, $day, $year) = sscanf($mandate, "%s %d %d");
echo "Item $serial was manufactured on: $year-" . substr($month, 0, 3) . "-$day\n";
?>
