<!DOCTYPE html>
<html>

<head>
	<meta charset="utf-8">
	<title>Hitung Nilai</title>
</head>

<body id="body">
	<center>
		<h1>Hitung Nilai Mahasiswa</h1>
		<form action="konversi.php" method="POST">
			<table>
				<tr>
					<td>Nama Mahasiswa</td>
					<td><input type="text" name="nama" onkeypress='return huruf(event)' required></td>

				<tr>
					<td>Mata Kuliah</td>
					<td><input type="text" name="matkul" required></td>
				</tr>

				<tr>
					<td>Nilai Kehadiran</td>
					<td><input id="input" name="kehadiran" onkeypress="return numbers(event)" type=" text" required></td>
				</tr>

				<tr>
					<td>Nilai Tugas</td>
					<td><input type="text" name="tugas" onkeypress="return numbers(event)" required></td>
				</tr>

				<tr>
					<td>Nilai UTS</td>
					<td><input type="text" name="uts" onkeypress="return numbers(event)" required></td>
				</tr>

				<tr>
					<td>Nilai UAS</td>
					<td><input type="text" name="uas" onkeypress="return numbers(event)" required></td>
				</tr>

				<tr>
					<td></td>
					<td><button type="submit" value="hitung">Hitung</button></td>
				</tr>
				<tr>
					<td></td>
					<td><a href="index.php" role="button">Kembali</a></td>
				</tr>

			</table>
	</center>
	</form>

	<script>
		function numbers(event) {
			var number = (event.which) ? event.which : event.keyCode
			if (number != 46 && number > 31 && (number < 48 || number > 57))
				return false;
			return true;
		}


		function huruf(hrf) {
			var huruf = (hrf.which) ? hrf.which : event.keyCode
			if ((huruf < 65 || huruf > 90) && (huruf < 97 || huruf > 122) && huruf > 32)
				return false;
			return true;
		}
	</script>

</body>

</html>