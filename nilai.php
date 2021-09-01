<!DOCTYPE html>
<html>

<head>
	<meta charset="utf-8">
	<title>Konversi Nilai Mahasiswa</title>
</head>

<body>

	<?php
$nama = $_POST['nama'];
$matkul= $_POST['matkul'];
$kehadiran= $_POST['kehadiran'];
$tugas= $_POST['tugas'];
$uts= $_POST['uts'];
$uas= $_POST['uas'];

//menghitung nilai dari input
$nilai_kehadiran = $kehadiran * 2;
$nilai_tugas = $tugas * 3;
$nilai_uts = $uts * 2;
$nilai_uas = $uas * 3;

//jumlahkan semua nilai untuk mendapatkan nilai akhir
$nilai_akhir = $nilai_kehadiran + $nilai_tugas + $nilai_uts + $nilai_tugas/10;

//menghitung grade berdasarkan nilai
if ($nilai_akhir >= 85)
{
	$grade = "A";
}
	elseif ($nilai_akhir >= 80 and $nilai_akhir < 85)
	{
		$grade = "A-";
	}
	elseif ($nilai_akhir >= 75 and $nilai_akhir < 80)
	{
		$grade = "B+";
	}
	elseif ($nilai_akhir >= 70 and $nilai_akhir < 75)
	{
		$grade = "B";
	}
	elseif ($nilai_akhir >= 65 and $nilai_akhir < 70)
	{
		$grade = "B-";
	}
	elseif ($nilai_akhir >= 60 and $nilai_akhir < 65)
	{
		$grade = "C+";
	}
	elseif ($nilai_akhir >= 55 and $nilai_akhir < 60)
	{
		$grade = "C";
	}
	elseif ($nilai_akhir >= 40 and $nilai_akhir < 55)
	{
		$grade = "D";
	}
	else {
		$grade = "E";
	}
?>

	<center>
		<h1>Konversi Nilai Mahasiswa</h1>

		<table>
			<tr>
				<td>Nama Mahasiswa</td>
				<td><b><?php echo "$nama"; ?></b></td>

			<tr>
				<td>Mata Kuliah</td>
				<td><b><?php echo "$matkul"; ?></b></td>
			</tr>

			<tr>
				<td>Nilai Kehadiran</td>
				<td><b><?php echo "$kehadiran"; ?></b></td>

			</tr>

			<tr>
				<td>Nilai Tugas</td>
				<td><b><?php echo "$tugas"; ?></b></td>
			</tr>

			<tr>
				<td>Nilai UTS</td>
				<td><b><?php echo "$uts"; ?></b></td>
			</tr>

			<tr>
				<td>Nilai UAS</td>
				<td><b><?php echo "$uas"; ?></b></td>
			</tr>

			<tr>
				<td>Nilai Akhir</td>
				<td><b><?php echo "$nilai_akhir"; ?></b></td>
			</tr>

			<tr>
				<td>Predikat</td>
				<td><b><?php echo "$grade"; ?></b></td>
			</tr>

			<td></td>
			<td><a href="index.php" role="button">Kembali</a></td>
			</tr>

		</table>
	</center>


	<script>
		function numbers(event) {
			var number = (event.which) ? event.which : event.keyCode
			if (number != 46 && number > 31 && (number < 48 || number > 57))
				return false;
			return true;
		}
	</script>



</body>

</html>