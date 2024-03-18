<!DOCTYPE html>

<html>
<head>
	<title>Üye Hesabı</title>

	<!-- Meta -->
	<meta charset="UTF-8">
	<meta name="description" content="Giriş">
	<meta name="keywords" content="Giriş,Üye Hesabı">
	<meta name="author" content="Muhammet Kemal Güvenç">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">

	<!-- Boostrap -->
	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
	<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js"></script>

    <!-- Font Awesome -->
    <script src="https://kit.fontawesome.com/dea668164e.js" crossorigin="anonymous"></script>

    <!-- İkon -->
    <link rel="icon" href="Kaynaklar/ikonlar/city-solid.ico" type="image/x-icon" />

    <!-- CSS -->
    <link rel="stylesheet" type="text/css" href="Kaynaklar/styles.css" />

    <!-- Javascript -->
    <script src="Kaynaklar/javascript.js" type="application/javascript"></script>

</head>

<body>
	<header>
		ÜYE HESABI
	</header>

	<nav>
		<div class="container-fluid">
			<div class="row" id="menu">
				<div class="col-lg">
					<a href="index.html">
						<i class="fas fa-home fa-fw"></i> Hakkımda
					</a>
				</div>
				<div class="col-lg">
					<a href="CV.html">
						<i class="fas fa-address-card fa-fw"></i> Cv
					</a>
				</div>
				<div class="col-lg">
					<a href="Sehrim.html">
						<i class="fas fa-city fa-fw"></i> Şehrim
					</a>
				</div>
				<div class="col-lg">
					<a href="Mirasimiz.html">
						<i class="fas fa-monument fa-fw"></i> Mirasımız
					</a>
				</div>
				<div class="col-lg">
					<a href="Iletisim.html">
						<i class="fas fa-file-signature fa-fw"></i> İletişim
					</a>
				</div>
				<div class="col-lg">
					<a href="Giris.html" id="active">
						<i class="fas fa-sign-in-alt fa-fw"></i> Çıkış
					</a>
				</div>
			</div>
		</div>
	</nav>

	<article>
		<div class="container">
			<div class="row">
				<div class="col col-xs col-sm col-md col-lg col-xl"></div>
				<div class="col col-xs-4 col-sm-4 col-md-4 col-lg-4 col-xl-4">
					<br />
					<img src="Kaynaklar/avatar.svg" alt="avatar" />
				</div>
				<div class="col col-xs col-sm col-md col-lg col-xl"></div>
			</div>
			<div class="row">
				<?php

				if($_SERVER["REQUEST_METHOD"]=="POST"){
				
					$eposta=$_POST["ad"];
					$sifre=$_POST["sifre"];

					$eposta=strtolower($eposta); /* E-postanın baş harfi büyük olunca sıkıntı çıkmasını engeller. */

					if($eposta=="b181210076@sakarya.edu.tr" && $sifre=="123456789"){

					echo "<div class='col col-xs col-sm col-md col-lg col-xl'></div>
					<div class='col col-xs col-sm col-md col-lg col-xl'>
					<p><h1>'Sisteme giriş yaptınız!'</h1></p>
					</div>
					<div class='col col-xs col-sm col-md col-lg col-xl' '></div>";
					}

					else {
					echo "
					<script>
                        alert('Girdiğiniz bilgiler geçersiz. Giriş sayfasına yönlendiriliyorusunuz.');
                        window.location = 'Giris.html';
					</script>";
					}

				}

				?>
			</div>
		</div>
	</article>

	<br /><br /><br /><br /><br /><br /><br /><br /><br />

	<footer>
		<p>Kişisel Web Sayfam --- #EvdeKalTürkiye</p>
	</footer>

</body>
</html>