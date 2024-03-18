--
-- PostgreSQL database dump
--

-- Dumped from database version 13.1
-- Dumped by pg_dump version 13.1

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

SET default_tablespace = '';

SET default_table_access_method = heap;

--
-- Name: Afisler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Afisler" (
    "afisNo" integer NOT NULL,
    icerik text NOT NULL
);


ALTER TABLE public."Afisler" OWNER TO postgres;

--
-- Name: Afisler_afisNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Afisler_afisNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Afisler_afisNo_seq" OWNER TO postgres;

--
-- Name: Afisler_afisNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Afisler_afisNo_seq" OWNED BY public."Afisler"."afisNo";


--
-- Name: Ayarlar; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Ayarlar" (
    "ayarNo" integer NOT NULL,
    ayar character varying NOT NULL,
    deger integer NOT NULL
);


ALTER TABLE public."Ayarlar" OWNER TO postgres;

--
-- Name: Ayarlar_ayarNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Ayarlar_ayarNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Ayarlar_ayarNo_seq" OWNER TO postgres;

--
-- Name: Ayarlar_ayarNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Ayarlar_ayarNo_seq" OWNED BY public."Ayarlar"."ayarNo";


--
-- Name: Digerler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Digerler" (
    "sayfaNo" integer NOT NULL,
    icerik text NOT NULL
);


ALTER TABLE public."Digerler" OWNER TO postgres;

--
-- Name: Digerler_sayfaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Digerler_sayfaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Digerler_sayfaNo_seq" OWNER TO postgres;

--
-- Name: Digerler_sayfaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Digerler_sayfaNo_seq" OWNED BY public."Digerler"."sayfaNo";


--
-- Name: Egitimler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Egitimler" (
    "sayfaNo" integer NOT NULL,
    icerik text NOT NULL,
    puan integer DEFAULT 0,
    CONSTRAINT "egitimCheck" CHECK ((puan >= 0))
);


ALTER TABLE public."Egitimler" OWNER TO postgres;

--
-- Name: Egitimler_sayfaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Egitimler_sayfaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Egitimler_sayfaNo_seq" OWNER TO postgres;

--
-- Name: Egitimler_sayfaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Egitimler_sayfaNo_seq" OWNED BY public."Egitimler"."sayfaNo";


--
-- Name: Egzersizler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Egzersizler" (
    "sayfaNo" integer NOT NULL,
    soru text NOT NULL,
    "soruIcerigi" text NOT NULL,
    cevap character varying NOT NULL,
    puan integer DEFAULT 0,
    CONSTRAINT "egzersizCheck" CHECK ((puan >= 0))
);


ALTER TABLE public."Egzersizler" OWNER TO postgres;

--
-- Name: Egzersizler_sayfaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Egzersizler_sayfaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Egzersizler_sayfaNo_seq" OWNER TO postgres;

--
-- Name: Egzersizler_sayfaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Egzersizler_sayfaNo_seq" OWNED BY public."Egzersizler"."sayfaNo";


--
-- Name: Erisimler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Erisimler" (
    "erisimNo" integer NOT NULL,
    "erisenKullanici" integer NOT NULL,
    "erisimTarihi" date NOT NULL,
    "ipAdresi" inet NOT NULL
);


ALTER TABLE public."Erisimler" OWNER TO postgres;

--
-- Name: Erisimler_erisenKullanici_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Erisimler_erisenKullanici_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Erisimler_erisenKullanici_seq" OWNER TO postgres;

--
-- Name: Erisimler_erisenKullanici_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Erisimler_erisenKullanici_seq" OWNED BY public."Erisimler"."erisenKullanici";


--
-- Name: Erisimler_erisimNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Erisimler_erisimNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Erisimler_erisimNo_seq" OWNER TO postgres;

--
-- Name: Erisimler_erisimNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Erisimler_erisimNo_seq" OWNED BY public."Erisimler"."erisimNo";


--
-- Name: Fotograflar; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Fotograflar" (
    "fotografNo" integer NOT NULL,
    en integer NOT NULL,
    boy integer NOT NULL,
    "dosyaYolu" character varying NOT NULL,
    CONSTRAINT "fotograflarCheck1" CHECK ((en >= 0)),
    CONSTRAINT "fotograflarCheck2" CHECK ((boy >= 0))
);


ALTER TABLE public."Fotograflar" OWNER TO postgres;

--
-- Name: Fotograflar_fotografNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Fotograflar_fotografNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Fotograflar_fotografNo_seq" OWNER TO postgres;

--
-- Name: Fotograflar_fotografNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Fotograflar_fotografNo_seq" OWNED BY public."Fotograflar"."fotografNo";


--
-- Name: KullaniciTipleri; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."KullaniciTipleri" (
    "tipNo" integer NOT NULL,
    "tipAdi" character varying NOT NULL
);


ALTER TABLE public."KullaniciTipleri" OWNER TO postgres;

--
-- Name: KullaniciTipleri_tipNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."KullaniciTipleri_tipNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."KullaniciTipleri_tipNo_seq" OWNER TO postgres;

--
-- Name: KullaniciTipleri_tipNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."KullaniciTipleri_tipNo_seq" OWNED BY public."KullaniciTipleri"."tipNo";


--
-- Name: Kullanicilar; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Kullanicilar" (
    "kullaniciNo" integer NOT NULL,
    "kullaniciTipi" integer NOT NULL,
    eposta character varying NOT NULL,
    sifre character varying NOT NULL,
    "uyelikTarihi" date NOT NULL
);


ALTER TABLE public."Kullanicilar" OWNER TO postgres;

--
-- Name: Kullanicilar_kullaniciNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Kullanicilar_kullaniciNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Kullanicilar_kullaniciNo_seq" OWNER TO postgres;

--
-- Name: Kullanicilar_kullaniciNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Kullanicilar_kullaniciNo_seq" OWNED BY public."Kullanicilar"."kullaniciNo";


--
-- Name: Kullanicilar_kullaniciTipi_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Kullanicilar_kullaniciTipi_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Kullanicilar_kullaniciTipi_seq" OWNER TO postgres;

--
-- Name: Kullanicilar_kullaniciTipi_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Kullanicilar_kullaniciTipi_seq" OWNED BY public."Kullanicilar"."kullaniciTipi";


--
-- Name: Okuyucular; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Okuyucular" (
    "kullaniciNo" integer NOT NULL,
    "egitimPuani" integer DEFAULT 0,
    "egzersizPuani" integer DEFAULT 0,
    "quizPuani" integer DEFAULT 0
);


ALTER TABLE public."Okuyucular" OWNER TO postgres;

--
-- Name: Okuyucular_kullaniciNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Okuyucular_kullaniciNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Okuyucular_kullaniciNo_seq" OWNER TO postgres;

--
-- Name: Okuyucular_kullaniciNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Okuyucular_kullaniciNo_seq" OWNED BY public."Okuyucular"."kullaniciNo";


--
-- Name: Ornekler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Ornekler" (
    "sayfaNo" integer NOT NULL,
    icerik text NOT NULL,
    link character varying NOT NULL
);


ALTER TABLE public."Ornekler" OWNER TO postgres;

--
-- Name: Ornekler_sayfaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Ornekler_sayfaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Ornekler_sayfaNo_seq" OWNER TO postgres;

--
-- Name: Ornekler_sayfaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Ornekler_sayfaNo_seq" OWNED BY public."Ornekler"."sayfaNo";


--
-- Name: QuizBasliklari; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."QuizBasliklari" (
    "baslikNo" integer NOT NULL,
    baslik character varying NOT NULL
);


ALTER TABLE public."QuizBasliklari" OWNER TO postgres;

--
-- Name: QuizBasliklari_baslikNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."QuizBasliklari_baslikNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."QuizBasliklari_baslikNo_seq" OWNER TO postgres;

--
-- Name: QuizBasliklari_baslikNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."QuizBasliklari_baslikNo_seq" OWNED BY public."QuizBasliklari"."baslikNo";


--
-- Name: Quizler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Quizler" (
    "sayfaNo" integer NOT NULL,
    baslik integer NOT NULL,
    soru text NOT NULL,
    a character varying NOT NULL,
    b character varying NOT NULL,
    c character varying NOT NULL,
    cevap character varying NOT NULL,
    puan integer DEFAULT 0,
    CONSTRAINT "quizCheck" CHECK ((puan >= 0))
);


ALTER TABLE public."Quizler" OWNER TO postgres;

--
-- Name: Quizler_baslik_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Quizler_baslik_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Quizler_baslik_seq" OWNER TO postgres;

--
-- Name: Quizler_baslik_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Quizler_baslik_seq" OWNED BY public."Quizler".baslik;


--
-- Name: Quizler_sayfaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Quizler_sayfaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Quizler_sayfaNo_seq" OWNER TO postgres;

--
-- Name: Quizler_sayfaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Quizler_sayfaNo_seq" OWNED BY public."Quizler"."sayfaNo";


--
-- Name: SayfaGuncellemeleri; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."SayfaGuncellemeleri" (
    "guncellemeNo" integer NOT NULL,
    "guncelleyenYazar" integer NOT NULL,
    "guncellenenSayfa" integer NOT NULL,
    "guncellenmeTarihi" date NOT NULL,
    "yapilanDegisiklik" text NOT NULL
);


ALTER TABLE public."SayfaGuncellemeleri" OWNER TO postgres;

--
-- Name: SayfaGuncellemeleri_guncellemeNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaGuncellemeleri_guncellemeNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaGuncellemeleri_guncellemeNo_seq" OWNER TO postgres;

--
-- Name: SayfaGuncellemeleri_guncellemeNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaGuncellemeleri_guncellemeNo_seq" OWNED BY public."SayfaGuncellemeleri"."guncellemeNo";


--
-- Name: SayfaGuncellemeleri_guncellenenSayfa_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaGuncellemeleri_guncellenenSayfa_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaGuncellemeleri_guncellenenSayfa_seq" OWNER TO postgres;

--
-- Name: SayfaGuncellemeleri_guncellenenSayfa_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaGuncellemeleri_guncellenenSayfa_seq" OWNED BY public."SayfaGuncellemeleri"."guncellenenSayfa";


--
-- Name: SayfaGuncellemeleri_guncelleyenYazar_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaGuncellemeleri_guncelleyenYazar_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaGuncellemeleri_guncelleyenYazar_seq" OWNER TO postgres;

--
-- Name: SayfaGuncellemeleri_guncelleyenYazar_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaGuncellemeleri_guncelleyenYazar_seq" OWNED BY public."SayfaGuncellemeleri"."guncelleyenYazar";


--
-- Name: SayfaTipleri; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."SayfaTipleri" (
    "tipNo" integer NOT NULL,
    "tipAdi" character varying NOT NULL
);


ALTER TABLE public."SayfaTipleri" OWNER TO postgres;

--
-- Name: SayfaTipleri_tipNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaTipleri_tipNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaTipleri_tipNo_seq" OWNER TO postgres;

--
-- Name: SayfaTipleri_tipNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaTipleri_tipNo_seq" OWNED BY public."SayfaTipleri"."tipNo";


--
-- Name: SayfaYetkileri; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."SayfaYetkileri" (
    "sayfaYetkisiNo" integer NOT NULL,
    "yetkiliYazar" integer NOT NULL,
    "yetkiliOlunanSayfaTipi" integer NOT NULL
);


ALTER TABLE public."SayfaYetkileri" OWNER TO postgres;

--
-- Name: SayfaYetkileri_sayfaYetkisiNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaYetkileri_sayfaYetkisiNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaYetkileri_sayfaYetkisiNo_seq" OWNER TO postgres;

--
-- Name: SayfaYetkileri_sayfaYetkisiNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaYetkileri_sayfaYetkisiNo_seq" OWNED BY public."SayfaYetkileri"."sayfaYetkisiNo";


--
-- Name: SayfaYetkileri_yetkiliOlunanSayfaTipi_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaYetkileri_yetkiliOlunanSayfaTipi_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaYetkileri_yetkiliOlunanSayfaTipi_seq" OWNER TO postgres;

--
-- Name: SayfaYetkileri_yetkiliOlunanSayfaTipi_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaYetkileri_yetkiliOlunanSayfaTipi_seq" OWNED BY public."SayfaYetkileri"."yetkiliOlunanSayfaTipi";


--
-- Name: SayfaYetkileri_yetkiliYazar_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SayfaYetkileri_yetkiliYazar_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SayfaYetkileri_yetkiliYazar_seq" OWNER TO postgres;

--
-- Name: SayfaYetkileri_yetkiliYazar_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SayfaYetkileri_yetkiliYazar_seq" OWNED BY public."SayfaYetkileri"."yetkiliYazar";


--
-- Name: Sayfalar; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Sayfalar" (
    "sayfaNo" integer NOT NULL,
    "sayfaTipi" integer NOT NULL,
    "olusturanYazar" integer NOT NULL,
    "olusturulmaTarihi" date NOT NULL,
    "enSonGuncellenmeTarihi" date NOT NULL,
    "gosterilmeSayisi" integer NOT NULL,
    gorunurluk boolean NOT NULL,
    CONSTRAINT "sayfalarCheck" CHECK (("gosterilmeSayisi" >= 0))
);


ALTER TABLE public."Sayfalar" OWNER TO postgres;

--
-- Name: Sayfalar_olusturanYazar_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Sayfalar_olusturanYazar_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Sayfalar_olusturanYazar_seq" OWNER TO postgres;

--
-- Name: Sayfalar_olusturanYazar_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Sayfalar_olusturanYazar_seq" OWNED BY public."Sayfalar"."olusturanYazar";


--
-- Name: Sayfalar_sayfaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Sayfalar_sayfaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Sayfalar_sayfaNo_seq" OWNER TO postgres;

--
-- Name: Sayfalar_sayfaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Sayfalar_sayfaNo_seq" OWNED BY public."Sayfalar"."sayfaNo";


--
-- Name: Sayfalar_sayfaTipi_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Sayfalar_sayfaTipi_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Sayfalar_sayfaTipi_seq" OWNER TO postgres;

--
-- Name: Sayfalar_sayfaTipi_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Sayfalar_sayfaTipi_seq" OWNED BY public."Sayfalar"."sayfaTipi";


--
-- Name: SertifikaAlimlari; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."SertifikaAlimlari" (
    "alimNo" integer NOT NULL,
    "alanKullanici" integer NOT NULL,
    "alinanSertifika" integer NOT NULL,
    basari boolean NOT NULL,
    "denemeTarihi" date NOT NULL,
    "sinavPuani" integer NOT NULL,
    "ikinciyeGirdiMi" boolean DEFAULT false,
    CONSTRAINT "sertifikaAlimlariCheck" CHECK (("sinavPuani" >= 0))
);


ALTER TABLE public."SertifikaAlimlari" OWNER TO postgres;

--
-- Name: SertifikaAlimlari_alanKullanici_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SertifikaAlimlari_alanKullanici_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SertifikaAlimlari_alanKullanici_seq" OWNER TO postgres;

--
-- Name: SertifikaAlimlari_alanKullanici_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SertifikaAlimlari_alanKullanici_seq" OWNED BY public."SertifikaAlimlari"."alanKullanici";


--
-- Name: SertifikaAlimlari_alimNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SertifikaAlimlari_alimNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SertifikaAlimlari_alimNo_seq" OWNER TO postgres;

--
-- Name: SertifikaAlimlari_alimNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SertifikaAlimlari_alimNo_seq" OWNED BY public."SertifikaAlimlari"."alimNo";


--
-- Name: SertifikaAlimlari_alinanSertifika_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."SertifikaAlimlari_alinanSertifika_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."SertifikaAlimlari_alinanSertifika_seq" OWNER TO postgres;

--
-- Name: SertifikaAlimlari_alinanSertifika_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."SertifikaAlimlari_alinanSertifika_seq" OWNED BY public."SertifikaAlimlari"."alinanSertifika";


--
-- Name: Sertifikalar; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Sertifikalar" (
    "sertifikaNo" integer NOT NULL,
    ad character varying NOT NULL,
    ucret money NOT NULL,
    "barajPuani" integer NOT NULL,
    CONSTRAINT "sertifikalarCheck" CHECK (("barajPuani" >= 0))
);


ALTER TABLE public."Sertifikalar" OWNER TO postgres;

--
-- Name: Sertifikalar_sertifikaNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Sertifikalar_sertifikaNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Sertifikalar_sertifikaNo_seq" OWNER TO postgres;

--
-- Name: Sertifikalar_sertifikaNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Sertifikalar_sertifikaNo_seq" OWNED BY public."Sertifikalar"."sertifikaNo";


--
-- Name: YapilanEgitimler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."YapilanEgitimler" (
    "yapilanEgitimNo" integer NOT NULL,
    "yapanKullanici" integer NOT NULL,
    "yapilanEgitim" integer NOT NULL
);


ALTER TABLE public."YapilanEgitimler" OWNER TO postgres;

--
-- Name: YapilanEgitimler_yapanKullanici_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanEgitimler_yapanKullanici_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanEgitimler_yapanKullanici_seq" OWNER TO postgres;

--
-- Name: YapilanEgitimler_yapanKullanici_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanEgitimler_yapanKullanici_seq" OWNED BY public."YapilanEgitimler"."yapanKullanici";


--
-- Name: YapilanEgitimler_yapilanEgitimNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanEgitimler_yapilanEgitimNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanEgitimler_yapilanEgitimNo_seq" OWNER TO postgres;

--
-- Name: YapilanEgitimler_yapilanEgitimNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanEgitimler_yapilanEgitimNo_seq" OWNED BY public."YapilanEgitimler"."yapilanEgitimNo";


--
-- Name: YapilanEgitimler_yapilanEgitim_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanEgitimler_yapilanEgitim_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanEgitimler_yapilanEgitim_seq" OWNER TO postgres;

--
-- Name: YapilanEgitimler_yapilanEgitim_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanEgitimler_yapilanEgitim_seq" OWNED BY public."YapilanEgitimler"."yapilanEgitim";


--
-- Name: YapilanEgzersizler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."YapilanEgzersizler" (
    "yapilanEgzersizNo" integer NOT NULL,
    "yapanKullanici" integer NOT NULL,
    "yapilanEgzersiz" integer NOT NULL
);


ALTER TABLE public."YapilanEgzersizler" OWNER TO postgres;

--
-- Name: YapilanEgzersizler_yapanKullanici_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanEgzersizler_yapanKullanici_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanEgzersizler_yapanKullanici_seq" OWNER TO postgres;

--
-- Name: YapilanEgzersizler_yapanKullanici_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanEgzersizler_yapanKullanici_seq" OWNED BY public."YapilanEgzersizler"."yapanKullanici";


--
-- Name: YapilanEgzersizler_yapilanEgzersizNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanEgzersizler_yapilanEgzersizNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanEgzersizler_yapilanEgzersizNo_seq" OWNER TO postgres;

--
-- Name: YapilanEgzersizler_yapilanEgzersizNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanEgzersizler_yapilanEgzersizNo_seq" OWNED BY public."YapilanEgzersizler"."yapilanEgzersizNo";


--
-- Name: YapilanEgzersizler_yapilanEgzersiz_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanEgzersizler_yapilanEgzersiz_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanEgzersizler_yapilanEgzersiz_seq" OWNER TO postgres;

--
-- Name: YapilanEgzersizler_yapilanEgzersiz_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanEgzersizler_yapilanEgzersiz_seq" OWNED BY public."YapilanEgzersizler"."yapilanEgzersiz";


--
-- Name: YapilanQuizler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."YapilanQuizler" (
    "yapilanQuizNo" integer NOT NULL,
    "yapanKullanici" integer NOT NULL,
    "yapilanQuiz" integer NOT NULL
);


ALTER TABLE public."YapilanQuizler" OWNER TO postgres;

--
-- Name: YapilanQuizler_yapanKullanici_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanQuizler_yapanKullanici_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanQuizler_yapanKullanici_seq" OWNER TO postgres;

--
-- Name: YapilanQuizler_yapanKullanici_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanQuizler_yapanKullanici_seq" OWNED BY public."YapilanQuizler"."yapanKullanici";


--
-- Name: YapilanQuizler_yapilanQuizNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanQuizler_yapilanQuizNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanQuizler_yapilanQuizNo_seq" OWNER TO postgres;

--
-- Name: YapilanQuizler_yapilanQuizNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanQuizler_yapilanQuizNo_seq" OWNED BY public."YapilanQuizler"."yapilanQuizNo";


--
-- Name: YapilanQuizler_yapilanQuiz_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."YapilanQuizler_yapilanQuiz_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."YapilanQuizler_yapilanQuiz_seq" OWNER TO postgres;

--
-- Name: YapilanQuizler_yapilanQuiz_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."YapilanQuizler_yapilanQuiz_seq" OWNED BY public."YapilanQuizler"."yapilanQuiz";


--
-- Name: Yazarlar; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Yazarlar" (
    "kullaniciNo" integer NOT NULL
);


ALTER TABLE public."Yazarlar" OWNER TO postgres;

--
-- Name: Yazarlar_kullaniciNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Yazarlar_kullaniciNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Yazarlar_kullaniciNo_seq" OWNER TO postgres;

--
-- Name: Yazarlar_kullaniciNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Yazarlar_kullaniciNo_seq" OWNED BY public."Yazarlar"."kullaniciNo";


--
-- Name: Yetkiler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Yetkiler" (
    "yetkiNo" integer NOT NULL,
    yetki character varying NOT NULL,
    yonetici boolean NOT NULL,
    yazar boolean NOT NULL,
    okuyucu boolean NOT NULL,
    ziyaretci boolean NOT NULL
);


ALTER TABLE public."Yetkiler" OWNER TO postgres;

--
-- Name: Yetkiler_yetkiNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Yetkiler_yetkiNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Yetkiler_yetkiNo_seq" OWNER TO postgres;

--
-- Name: Yetkiler_yetkiNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Yetkiler_yetkiNo_seq" OWNED BY public."Yetkiler"."yetkiNo";


--
-- Name: Yoneticiler; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Yoneticiler" (
    "kullaniciNo" integer NOT NULL
);


ALTER TABLE public."Yoneticiler" OWNER TO postgres;

--
-- Name: Yoneticiler_kullaniciNo_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public."Yoneticiler_kullaniciNo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."Yoneticiler_kullaniciNo_seq" OWNER TO postgres;

--
-- Name: Yoneticiler_kullaniciNo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public."Yoneticiler_kullaniciNo_seq" OWNED BY public."Yoneticiler"."kullaniciNo";


--
-- Name: Afisler afisNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Afisler" ALTER COLUMN "afisNo" SET DEFAULT nextval('public."Afisler_afisNo_seq"'::regclass);


--
-- Name: Ayarlar ayarNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ayarlar" ALTER COLUMN "ayarNo" SET DEFAULT nextval('public."Ayarlar_ayarNo_seq"'::regclass);


--
-- Name: Digerler sayfaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Digerler" ALTER COLUMN "sayfaNo" SET DEFAULT nextval('public."Digerler_sayfaNo_seq"'::regclass);


--
-- Name: Egitimler sayfaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egitimler" ALTER COLUMN "sayfaNo" SET DEFAULT nextval('public."Egitimler_sayfaNo_seq"'::regclass);


--
-- Name: Egzersizler sayfaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egzersizler" ALTER COLUMN "sayfaNo" SET DEFAULT nextval('public."Egzersizler_sayfaNo_seq"'::regclass);


--
-- Name: Erisimler erisimNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Erisimler" ALTER COLUMN "erisimNo" SET DEFAULT nextval('public."Erisimler_erisimNo_seq"'::regclass);


--
-- Name: Erisimler erisenKullanici; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Erisimler" ALTER COLUMN "erisenKullanici" SET DEFAULT nextval('public."Erisimler_erisenKullanici_seq"'::regclass);


--
-- Name: Fotograflar fotografNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Fotograflar" ALTER COLUMN "fotografNo" SET DEFAULT nextval('public."Fotograflar_fotografNo_seq"'::regclass);


--
-- Name: KullaniciTipleri tipNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."KullaniciTipleri" ALTER COLUMN "tipNo" SET DEFAULT nextval('public."KullaniciTipleri_tipNo_seq"'::regclass);


--
-- Name: Kullanicilar kullaniciNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Kullanicilar" ALTER COLUMN "kullaniciNo" SET DEFAULT nextval('public."Kullanicilar_kullaniciNo_seq"'::regclass);


--
-- Name: Kullanicilar kullaniciTipi; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Kullanicilar" ALTER COLUMN "kullaniciTipi" SET DEFAULT nextval('public."Kullanicilar_kullaniciTipi_seq"'::regclass);


--
-- Name: Okuyucular kullaniciNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Okuyucular" ALTER COLUMN "kullaniciNo" SET DEFAULT nextval('public."Okuyucular_kullaniciNo_seq"'::regclass);


--
-- Name: Ornekler sayfaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ornekler" ALTER COLUMN "sayfaNo" SET DEFAULT nextval('public."Ornekler_sayfaNo_seq"'::regclass);


--
-- Name: QuizBasliklari baslikNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."QuizBasliklari" ALTER COLUMN "baslikNo" SET DEFAULT nextval('public."QuizBasliklari_baslikNo_seq"'::regclass);


--
-- Name: Quizler sayfaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Quizler" ALTER COLUMN "sayfaNo" SET DEFAULT nextval('public."Quizler_sayfaNo_seq"'::regclass);


--
-- Name: Quizler baslik; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Quizler" ALTER COLUMN baslik SET DEFAULT nextval('public."Quizler_baslik_seq"'::regclass);


--
-- Name: SayfaGuncellemeleri guncellemeNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaGuncellemeleri" ALTER COLUMN "guncellemeNo" SET DEFAULT nextval('public."SayfaGuncellemeleri_guncellemeNo_seq"'::regclass);


--
-- Name: SayfaGuncellemeleri guncelleyenYazar; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaGuncellemeleri" ALTER COLUMN "guncelleyenYazar" SET DEFAULT nextval('public."SayfaGuncellemeleri_guncelleyenYazar_seq"'::regclass);


--
-- Name: SayfaGuncellemeleri guncellenenSayfa; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaGuncellemeleri" ALTER COLUMN "guncellenenSayfa" SET DEFAULT nextval('public."SayfaGuncellemeleri_guncellenenSayfa_seq"'::regclass);


--
-- Name: SayfaTipleri tipNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaTipleri" ALTER COLUMN "tipNo" SET DEFAULT nextval('public."SayfaTipleri_tipNo_seq"'::regclass);


--
-- Name: SayfaYetkileri sayfaYetkisiNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaYetkileri" ALTER COLUMN "sayfaYetkisiNo" SET DEFAULT nextval('public."SayfaYetkileri_sayfaYetkisiNo_seq"'::regclass);


--
-- Name: SayfaYetkileri yetkiliYazar; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaYetkileri" ALTER COLUMN "yetkiliYazar" SET DEFAULT nextval('public."SayfaYetkileri_yetkiliYazar_seq"'::regclass);


--
-- Name: SayfaYetkileri yetkiliOlunanSayfaTipi; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaYetkileri" ALTER COLUMN "yetkiliOlunanSayfaTipi" SET DEFAULT nextval('public."SayfaYetkileri_yetkiliOlunanSayfaTipi_seq"'::regclass);


--
-- Name: Sayfalar sayfaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sayfalar" ALTER COLUMN "sayfaNo" SET DEFAULT nextval('public."Sayfalar_sayfaNo_seq"'::regclass);


--
-- Name: Sayfalar sayfaTipi; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sayfalar" ALTER COLUMN "sayfaTipi" SET DEFAULT nextval('public."Sayfalar_sayfaTipi_seq"'::regclass);


--
-- Name: Sayfalar olusturanYazar; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sayfalar" ALTER COLUMN "olusturanYazar" SET DEFAULT nextval('public."Sayfalar_olusturanYazar_seq"'::regclass);


--
-- Name: SertifikaAlimlari alimNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SertifikaAlimlari" ALTER COLUMN "alimNo" SET DEFAULT nextval('public."SertifikaAlimlari_alimNo_seq"'::regclass);


--
-- Name: SertifikaAlimlari alanKullanici; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SertifikaAlimlari" ALTER COLUMN "alanKullanici" SET DEFAULT nextval('public."SertifikaAlimlari_alanKullanici_seq"'::regclass);


--
-- Name: SertifikaAlimlari alinanSertifika; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SertifikaAlimlari" ALTER COLUMN "alinanSertifika" SET DEFAULT nextval('public."SertifikaAlimlari_alinanSertifika_seq"'::regclass);


--
-- Name: Sertifikalar sertifikaNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sertifikalar" ALTER COLUMN "sertifikaNo" SET DEFAULT nextval('public."Sertifikalar_sertifikaNo_seq"'::regclass);


--
-- Name: YapilanEgitimler yapilanEgitimNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgitimler" ALTER COLUMN "yapilanEgitimNo" SET DEFAULT nextval('public."YapilanEgitimler_yapilanEgitimNo_seq"'::regclass);


--
-- Name: YapilanEgitimler yapanKullanici; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgitimler" ALTER COLUMN "yapanKullanici" SET DEFAULT nextval('public."YapilanEgitimler_yapanKullanici_seq"'::regclass);


--
-- Name: YapilanEgitimler yapilanEgitim; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgitimler" ALTER COLUMN "yapilanEgitim" SET DEFAULT nextval('public."YapilanEgitimler_yapilanEgitim_seq"'::regclass);


--
-- Name: YapilanEgzersizler yapilanEgzersizNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgzersizler" ALTER COLUMN "yapilanEgzersizNo" SET DEFAULT nextval('public."YapilanEgzersizler_yapilanEgzersizNo_seq"'::regclass);


--
-- Name: YapilanEgzersizler yapanKullanici; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgzersizler" ALTER COLUMN "yapanKullanici" SET DEFAULT nextval('public."YapilanEgzersizler_yapanKullanici_seq"'::regclass);


--
-- Name: YapilanEgzersizler yapilanEgzersiz; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgzersizler" ALTER COLUMN "yapilanEgzersiz" SET DEFAULT nextval('public."YapilanEgzersizler_yapilanEgzersiz_seq"'::regclass);


--
-- Name: YapilanQuizler yapilanQuizNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanQuizler" ALTER COLUMN "yapilanQuizNo" SET DEFAULT nextval('public."YapilanQuizler_yapilanQuizNo_seq"'::regclass);


--
-- Name: YapilanQuizler yapanKullanici; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanQuizler" ALTER COLUMN "yapanKullanici" SET DEFAULT nextval('public."YapilanQuizler_yapanKullanici_seq"'::regclass);


--
-- Name: YapilanQuizler yapilanQuiz; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanQuizler" ALTER COLUMN "yapilanQuiz" SET DEFAULT nextval('public."YapilanQuizler_yapilanQuiz_seq"'::regclass);


--
-- Name: Yazarlar kullaniciNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yazarlar" ALTER COLUMN "kullaniciNo" SET DEFAULT nextval('public."Yazarlar_kullaniciNo_seq"'::regclass);


--
-- Name: Yetkiler yetkiNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yetkiler" ALTER COLUMN "yetkiNo" SET DEFAULT nextval('public."Yetkiler_yetkiNo_seq"'::regclass);


--
-- Name: Yoneticiler kullaniciNo; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yoneticiler" ALTER COLUMN "kullaniciNo" SET DEFAULT nextval('public."Yoneticiler_kullaniciNo_seq"'::regclass);


--
-- Data for Name: Afisler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Afisler" VALUES
	(1, '<div class="sidesection">
<h4><a href="/colors/colors_picker.asp">COLOR PICKER</a></h4>
<a href="/colors/colors_picker.asp">
<img src="/images/colorpicker.gif" alt="colorpicker"></a>
</div>'),
	(2, '<div class="sidesection" style="margin-left:auto;margin-right:auto;max-width:230px">
<!--<h4><a class="w3-button w3-green w3-block" href="https://shop.w3schools.com/" target="_blank" style="text-decoration:none;margin-top:1px;margin-bottom:1px">SHOP</a></h4>-->
<a href="https://shop.w3schools.com/" target="_blank" title="Buy W3Schools Merchandize">
  <img src="/images/tshirt.jpg" style="max-width:100%;">
</a>
</div>'),
	(3, '<div class="sidesection w3-light-grey" style="margin-left:auto;margin-right:auto;max-width:230px">
  <div class="w3-container w3-dark-grey">
    <h4><a href="/howto/default.asp" class="w3-hover-text-white">HOW TO</a></h4>
  </div>
  <div class="w3-container w3-left-align w3-padding-16">
    <a href="/howto/howto_js_tabs.asp">Tabs</a><br>
    <a href="/howto/howto_css_dropdown.asp">Dropdowns</a><br>
    <a href="/howto/howto_js_accordion.asp">Accordions</a><br>
    <a href="/howto/howto_js_sidenav.asp">Side Navigation</a><br>
    <a href="/howto/howto_js_topnav.asp">Top Navigation</a><br>
    <a href="/howto/howto_css_modals.asp">Modal Boxes</a><br>
    <a href="/howto/howto_js_progressbar.asp">Progress Bars</a><br>
    <a href="/howto/howto_css_parallax.asp">Parallax</a><br>
    <a href="/howto/howto_css_login_form.asp">Login Form</a><br>
    <a href="/howto/howto_html_include.asp">HTML Includes</a><br>
    <a href="/howto/howto_google_maps.asp">Google Maps</a><br>
    <a href="/howto/howto_js_rangeslider.asp">Range Sliders</a><br>
    <a href="/howto/howto_css_tooltip.asp">Tooltips</a><br>
    <a href="/howto/howto_js_slideshow.asp">Slideshow</a><br>
    <a href="/howto/howto_js_filter_lists.asp">Filter List</a><br>
    <a href="/howto/howto_js_sort_list.asp">Sort List</a><br>
  </div>
</div>');


--
-- Data for Name: Ayarlar; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Ayarlar" VALUES
	(1, 'template', 3),
	(2, 'darkmode', 1);


--
-- Data for Name: Digerler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Digerler" VALUES
	(9, '<div class="w3-col l10 m12" id="main">
      <div id="mainLeaderboard" style="overflow:hidden;">
        <!-- MainLeaderboard-->

        <!--<pre>main_leaderboard, all: [728,90][970,90][320,50][468,60]</pre>-->
        <div id="snhb-main_leaderboard-0"></div>
        <!-- adspace leaderboard -->
       
      </div>
<h1>How TO - Tab Headers</h1>
<div class="w3-clear nextprev">
<a class="w3-left w3-btn" href="howto_js_vertical_tabs.asp">❮ Previous</a>
  <a class="w3-right w3-btn" href="howto_js_full_page_tabs.asp">Next ❯</a>
</div>
<hr>
<p class="intro">Learn how to create tab headers with CSS and JavaScript.</p>
<hr>
<h2>Tab Headers</h2>
<p>Click on the "city" buttons to display the appropriate header:</p>

<div id="London" class="tabcontent" style="display: none;">
  <h1>London</h1>
  <p>London is the capital city of England.</p>
</div>

<div id="Paris" class="tabcontent" style="display: none;">
  <h1>Paris</h1>
  <p>Paris is the capital of France.</p> 
</div>

<div id="Tokyo" class="tabcontent" style="display: block;">
  <h1>Tokyo</h1>
  <p>Tokyo is the capital of Japan.</p>
</div>

<div id="Oslo" class="tabcontent" style="display: none;">
  <h1>Oslo</h1>
  <p>Oslo is the capital of Norway.</p>
</div>

<button class="tablink" onclick="openCity(''London'', this, ''#f44336'')">London</button>
<button class="tablink" onclick="openCity(''Paris'', this, ''#4CAF50'')">Paris</button>
<button class="tablink" onclick="openCity(''Tokyo'', this, ''#2196F3'')" id="defaultOpen" style="background-color: rgb(33, 150, 243); color: white;">Tokyo</button>
<button class="tablink" onclick="openCity(''Oslo'', this, ''#ff5722'')">Oslo</button>

<script>
function openCity(cityName,elmnt,color) {
    var i, tabcontent, tablinks;
    tabcontent = document.getElementsByClassName("tabcontent");
    for (i = 0; i < tabcontent.length; i++) {
        tabcontent[i].style.display = "none";
    }
    tablinks = document.getElementsByClassName("tablink");
    for (i = 0; i < tablinks.length; i++) {
        tablinks[i].style.backgroundColor = "";
        tablinks[i].style.color = "";
    }
    document.getElementById(cityName).style.display = "block";
    elmnt.style.backgroundColor = color;
    elmnt.style.color = "white";

}
// Get the element with id="defaultOpen" and click on it
document.getElementById("defaultOpen").click();
</script><br><br><br>
<p style="margin-top:2px"><a target="_blank" href="tryit.asp?filename=tryhow_js_tab_header" class="w3-btn">Try it Yourself »</a></p>

<hr>

<h2>Create Togglable Tab Headers</h2>
<h5>Step 1) Add HTML:</h5>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>div<span class="attributecolor" style="color:red"> id<span class="attributevaluecolor" style="color:mediumblue">="London"</span> class<span class="attributevaluecolor" style="color:mediumblue">="tabcontent"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span>London<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="tagcolor" style="color:mediumblue">&gt;</span></span>London is the 
  capital city of England.<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/div<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>div<span class="attributecolor" style="color:red"> id<span class="attributevaluecolor" style="color:mediumblue">="Paris"</span> class<span class="attributevaluecolor" style="color:mediumblue">="tabcontent"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>
  &nbsp;
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Paris<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Paris is the capital of France.<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span> <br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/div<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><br>
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>div<span class="attributecolor" style="color:red"> id<span class="attributevaluecolor" style="color:mediumblue">="Tokyo"</span> class<span class="attributevaluecolor" style="color:mediumblue">="tabcontent"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Tokyo<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Tokyo is the 
  capital of Japan.<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/div<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>div<span class="attributecolor" style="color:red"> id<span class="attributevaluecolor" style="color:mediumblue">="Oslo"</span> class<span class="attributevaluecolor" style="color:mediumblue">="tabcontent"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>
  &nbsp;
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Oslo<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Oslo is the capital of Norway.<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/div<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><br>
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>button<span class="attributecolor" style="color:red"> class<span class="attributevaluecolor" style="color:mediumblue">="tablink"</span> onclick<span class="attributevaluecolor" style="color:mediumblue">="openCity(''London'', this, ''red'')"</span> id<span class="attributevaluecolor" style="color:mediumblue">="defaultOpen"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>London<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/button<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>button<span class="attributecolor" style="color:red"> class<span class="attributevaluecolor" style="color:mediumblue">="tablink"</span> onclick<span class="attributevaluecolor" style="color:mediumblue">="openCity(''Paris'', this, 
  ''green'')"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Paris<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/button<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>button<span class="attributecolor" style="color:red"> class<span class="attributevaluecolor" style="color:mediumblue">="tablink"</span> onclick<span class="attributevaluecolor" style="color:mediumblue">="openCity(''Tokyo'', 
  this, ''blue'')"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Tokyo<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/button<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>button<span class="attributecolor" style="color:red"> class<span class="attributevaluecolor" style="color:mediumblue">="tablink"</span> onclick<span class="attributevaluecolor" style="color:mediumblue">="openCity(''Oslo'', 
  this, ''orange'')"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Oslo<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/button<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
</div>
<p>Create buttons to open specific 
tab content. All &lt;div&gt; elements with <code class="w3-codespan">class="tabcontent"</code> are hidden by default 
(with CSS &amp; JS). When the user clicks on a button - it will open the tab content 
that "matches" this button.</p>
<hr>
<h5>Step 2) Add CSS:</h5>
<p>Style the buttons and the tab content:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate cssHigh"><span class="cssselectorcolor" style="color:brown">
  <span class="commentcolor" style="color:green">/* Style the tab buttons */</span><br>.tablink <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>&nbsp;&nbsp;background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> #555<span class="cssdelimitercolor" style="color:black">;</span></span><br>
  &nbsp; color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> white<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; 
  float<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> left<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; border<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> none<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;outline<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> none<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; cursor<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> pointer<span class="cssdelimitercolor" style="color:black">;</span></span><br>
  &nbsp; 
  padding<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> 14px 16px<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; font-size<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> 17px<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;width<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> 25%<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br>
  <br><span class="commentcolor" style="color:green">/* Change background color of buttons on hover */</span><br>.tablink:hover <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>&nbsp;&nbsp;background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> #777<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br><br><span class="commentcolor" style="color:green">/* Set default styles for tab content */</span><br>.tabcontent 
  <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>&nbsp;&nbsp;color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> white<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;display<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> none<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; 
  padding<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> 50px<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; text-align<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> center<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br><br><span class="commentcolor" style="color:green">/* Style 
  each tab content individually */</span> <br>#London <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red">background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span>red<span class="cssdelimitercolor" style="color:black">;</span></span></span><span class="cssdelimitercolor" style="color:black">}</span><br>#Paris <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red">background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span>green<span class="cssdelimitercolor" style="color:black">;</span></span></span><span class="cssdelimitercolor" style="color:black">}</span><br>
  #Tokyo <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red">background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span>blue<span class="cssdelimitercolor" style="color:black">;</span></span></span><span class="cssdelimitercolor" style="color:black">}</span><br>#Oslo <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red">background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span>orange<span class="cssdelimitercolor" style="color:black">;</span></span></span><span class="cssdelimitercolor" style="color:black">}</span><br> </span></div>
</div>
<hr>
<div id="midcontentadcontainer" style="overflow:auto;text-align:center">
<!-- MidContent -->
<!-- <p class="adtext">Advertisement</p> -->

  <!--<pre>mid_content, all: [300,250][336,280][728,90][970,250][970,90][320,50][468,60]</pre>-->
  <div id="snhb-mid_content-0"></div>

</div>
<hr>

<h5>Step 3) Add JavaScript:</h5>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate jsHigh"><span class="jscolor" style="color:black"><span class="jsnumbercolor" style="color:red">
</span>  <span class="jskeywordcolor" style="color:mediumblue">function</span> openCity(cityName, elmnt, color) {<br>&nbsp; <span class="commentcolor" style="color:green">// Hide all 
  elements with class="tabcontent" by default */<br></span>&nbsp; <span class="jskeywordcolor" style="color:mediumblue">var</span> i, <span class="jsnumbercolor" style="color:red">
</span>  tabcontent, tablinks;<br>&nbsp; tabcontent = <span class="jsnumbercolor" style="color:red">
</span>  document.<span class="jspropertycolor" style="color:black">getElementsByClassName</span>(<span class="jsstringcolor" style="color:brown">"tabcontent"</span>);<br>&nbsp; <span class="jskeywordcolor" style="color:mediumblue">for</span> (i = <span class="jsnumbercolor" style="color:red">
</span>  <span class="jsnumbercolor" style="color:red">0</span>; i &lt; tabcontent.<span class="jspropertycolor" style="color:black">length</span>; i++) {<br>&nbsp;&nbsp;&nbsp; <span class="jsnumbercolor" style="color:red">
</span>  tabcontent[i].<span class="jspropertycolor" style="color:black">style</span>.<span class="jspropertycolor" style="color:black">display</span> = <span class="jsstringcolor" style="color:brown">"none"</span>;<br>&nbsp;&nbsp;}<br><span class="jsnumbercolor" style="color:red">
</span>  <br>&nbsp; <span class="commentcolor" style="color:green">// Remove the background color of all tablinks/buttons<br></span>&nbsp;&nbsp;tablinks = document.<span class="jspropertycolor" style="color:black">getElementsByClassName</span>(<span class="jsstringcolor" style="color:brown">"tablink"</span>);<br>&nbsp;&nbsp;<span class="jskeywordcolor" style="color:mediumblue">for</span> (i = <span class="jsnumbercolor" style="color:red">0</span>; i &lt; tablinks.<span class="jspropertycolor" style="color:black">length</span>; i++) {<br>&nbsp;&nbsp;&nbsp;&nbsp;tablinks[i].<span class="jspropertycolor" style="color:black">style</span>.<span class="jspropertycolor" style="color:black">backgroundColor</span> = <span class="jsstringcolor" style="color:brown">""</span>;<br><span class="jsnumbercolor" style="color:red">
</span>  &nbsp;&nbsp;}<br><span class="jsnumbercolor" style="color:red">
</span>  <br>&nbsp;&nbsp;<span class="commentcolor" style="color:green">// Show the specific tab content<br></span>&nbsp;&nbsp;document.<span class="jspropertycolor" style="color:black">getElementById</span>(cityName).<span class="jspropertycolor" style="color:black">style</span>.<span class="jspropertycolor" style="color:black">display</span> = <span class="jsstringcolor" style="color:brown">"block"</span>;<br><br>&nbsp;&nbsp;<span class="commentcolor" style="color:green">// Add the specific color to the button used to open the tab content<br></span>&nbsp;&nbsp;elmnt.<span class="jspropertycolor" style="color:black">style</span>.<span class="jspropertycolor" style="color:black">backgroundColor</span> = color;<br>}<br><br><span class="commentcolor" style="color:green">// Get the element with id="defaultOpen" 
  and click on it<br></span>document.<span class="jspropertycolor" style="color:black">getElementById</span>(<span class="jsstringcolor" style="color:brown">"defaultOpen"</span>).<span class="jspropertycolor" style="color:black">click</span>(); </span></div>
<a target="_blank" href="tryit.asp?filename=tryhow_js_tab_header" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<p><strong>Tip:</strong> Also check out <a href="howto_js_tabs.asp">How To - Tabs</a>.</p>

<br>
<div class="w3-clear nextprev">
<a class="w3-left w3-btn" href="howto_js_vertical_tabs.asp">❮ Previous</a>
  <a class="w3-right w3-btn" href="howto_js_full_page_tabs.asp">Next ❯</a>
</div>
<div id="mypagediv2" style="position:relative;text-align:center;"></div>
<br>

</div>'),
	(8, '<div class="w3-col l10 m12" id="main">
      <div id="mainLeaderboard" style="overflow:hidden;">
        <!-- MainLeaderboard-->

        <!--<pre>main_leaderboard, all: [728,90][970,90][320,50][468,60]</pre>-->
        <div id="snhb-main_leaderboard-0"></div>
        <!-- adspace leaderboard -->
       
      </div>
<h1>How TO - Top Navigation</h1>
<div class="w3-clear nextprev">
  <a class="w3-left w3-btn" href="howto_js_hover_tabs.asp">❮ Previous</a>
  <a class="w3-right w3-btn" href="howto_js_topnav_responsive.asp">Next ❯</a>
</div>
<hr>
<p class="intro">Learn how to create a top navigation bar with CSS.</p>
<hr>
<h2>Top Navigation Bar</h2>

<ul id="myUl" class="topnav2">
  <li><a href="javascript:void(0);" class="active">Home</a></li>
  <li><a href="javascript:void(0);">News</a></li>
  <li><a href="javascript:void(0);">Contact</a></li>
  <li class="w3-hide-small"><a href="javascript:void(0);">About</a></li>
</ul>
<p><a target="_blank" href="tryit.asp?filename=tryhow_css_topnav" class="w3-btn">Try it Yourself »</a></p>

<hr style="clear:both;">
<h2>Create A Top Navigation Bar</h2>
<h5>Step 1) Add HTML:</h5>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>div<span class="attributecolor" style="color:red"> class<span class="attributevaluecolor" style="color:mediumblue">="topnav"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>a<span class="attributecolor" style="color:red"> class<span class="attributevaluecolor" style="color:mediumblue">="active"</span> href<span class="attributevaluecolor" style="color:mediumblue">="#home"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Home<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/a<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; 
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>a<span class="attributecolor" style="color:red"> href<span class="attributevaluecolor" style="color:mediumblue">="#news"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>News<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/a<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>a<span class="attributecolor" style="color:red"> href<span class="attributevaluecolor" style="color:mediumblue">="#contact"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Contact<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/a<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>&nbsp; 
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>a<span class="attributecolor" style="color:red"> href<span class="attributevaluecolor" style="color:mediumblue">="#about"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>About<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/a<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/div<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
</div>
<hr>
<h5>Step 2) Add CSS:</h5>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate cssHigh"><span class="cssselectorcolor" style="color:brown">
<span class="commentcolor" style="color:green">/* 
  Add a black background color to the top navigation */</span><br>.topnav <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>&nbsp;&nbsp;background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> #333<span class="cssdelimitercolor" style="color:black">;</span></span><br>
  &nbsp; overflow<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> hidden<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br><br><span class="commentcolor" style="color:green">/* 
Style the links inside the navigation bar */</span><br>.topnav a <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>&nbsp; 
  float<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> left<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> #f2f2f2<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;text-align<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> center<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;padding<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> 14px 16px<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;text-decoration<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> none<span class="cssdelimitercolor" style="color:black">;</span></span><br>
  &nbsp; 
  font-size<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> 17px<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br><br><span class="commentcolor" style="color:green">/* Change the color of links on hover */</span><br>.topnav a:hover <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>
  &nbsp; 
  background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> #ddd<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp; color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> black<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br><br><span class="commentcolor" style="color:green">/* Add 
  a color to the active/current link */</span><br>.topnav 
  a.active <span class="cssdelimitercolor" style="color:black">{</span><span class="csspropertycolor" style="color:red"><br>&nbsp;&nbsp;background-color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> #4CAF50<span class="cssdelimitercolor" style="color:black">;</span></span><br>&nbsp;&nbsp;color<span class="csspropertyvaluecolor" style="color:mediumblue"><span class="cssdelimitercolor" style="color:black">:</span> white<span class="cssdelimitercolor" style="color:black">;</span></span><br></span><span class="cssdelimitercolor" style="color:black">}</span><br> </span></div>
<a target="_blank" href="tryit.asp?filename=tryhow_css_topnav" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<p><strong>Tip:</strong> To create mobile-friendly, responsive navigation bars, read our <a href="howto_js_topnav_responsive.asp">How To - Responsive Top Navigation</a> tutorial.</p>
<p><strong>Tip:</strong> Go to our <a href="/css/css_navbar.asp">CSS Navbar Tutorial</a> to learn more about navigation bars.</p>
<br>

<div class="w3-clear nextprev">
  <a class="w3-left w3-btn" href="howto_js_hover_tabs.asp">❮ Previous</a>
  <a class="w3-right w3-btn" href="howto_js_topnav_responsive.asp">Next ❯</a>
</div>
<div id="mypagediv2" style="position:relative;text-align:center;"></div>
<br>

</div>');


--
-- Data for Name: Egitimler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Egitimler" VALUES
	(1, '<div class="w3-col l10 m12" id="main">
      <div id="mainLeaderboard" style="overflow:hidden;">
        <!-- MainLeaderboard-->
        
        <div id="div-gpt-ad-1422003450156-2">
          <script type="text/javascript">googletag.cmd.push(function() { googletag.display(''div-gpt-ad-1422003450156-2''); });</script>
        </div>
       
      </div>
<h1>HTML <span class="color_h1">Headings</span></h1>
<div class="w3-clear nextprev">
<a class="w3-left w3-btn" href="html_attributes.asp">❮ Previous</a>
<a class="w3-right w3-btn" href="html_paragraphs.asp">Next ❯</a>
</div>
<hr>
<p class="intro">HTML headings are titles or subtitles that you want to display on a webpage.</p>
<hr>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-white w3-padding notranslate">
<h1>Heading 1</h1>
<h2>Heading 2</h2>
<h3>Heading 3</h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
</div>
<a class="w3-btn w3-margin-top w3-margin-bottom" href="tryit.asp?filename=tryhtml_headings" target="_blank">Try it Yourself »</a>
</div>

<hr>
<h2>HTML Headings</h2>
<p>HTML headings are defined with the <code class="w3-codespan">&lt;h1&gt;</code> to <code class="w3-codespan">&lt;h6&gt;</code> tags.</p>
<p><code class="w3-codespan">&lt;h1&gt;</code> defines the most important heading. <code class="w3-codespan">&lt;h6&gt;</code> defines the least important heading.</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 1<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h2<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 2<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h2<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h3<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 3<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h3<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h4<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 4<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h4<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h5<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 5<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h5<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h6<span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 6<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h6<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
<a target="_blank" href="tryit.asp?filename=tryhtml_headings" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<div class="w3-panel w3-note">
  <p><strong>Note:</strong> Browsers automatically add some white space (a margin) before and after a heading.</p>
</div>
<hr>

<h2>Headings Are Important</h2>
<p>Search engines use the headings to index the structure and content of your web pages.</p>
<p>Users often skim a page by its headings. It is important to use headings to show the document structure.</p>
<p><code class="w3-codespan">&lt;h1&gt;</code> headings should be used for main headings, followed by <code class="w3-codespan">&lt;h2&gt;</code> headings, then the less important 
<code class="w3-codespan">&lt;h3&gt;</code>, and so on.</p>
<div class="w3-panel w3-note">
  <p><strong>Note:</strong> Use HTML headings for headings only. Don''t use headings to make text 
  <strong>BIG</strong> or <strong>bold</strong>.</p>
</div>
<hr>
<h2>Bigger Headings</h2>

<p>Each HTML heading has a default size. However, you can specify the size for any heading 
with the <code class="w3-codespan">style</code> attribute, using the CSS <code class="w3-codespan">font-size</code> property:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> 
  style<span class="attributevaluecolor" style="color:mediumblue">="font-size:60px;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Heading 1<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br>
   </div>
<a target="_blank" href="tryit.asp?filename=tryhtml_headings_size" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>
<hr>
<div id="midcontentadcontainer" style="overflow:auto;text-align:center">
<!-- MidContent -->
<!-- <p class="adtext">Advertisement</p> -->

  <div id="div-gpt-ad-1493883843099-0" style="display: inline-block">
    <script>
    googletag.cmd.push(function() { googletag.display(''div-gpt-ad-1493883843099-0''); });
    </script>
  </div>

</div>
<hr>
<h2>HTML Exercises</h2>
<form autocomplete="off" id="w3-exerciseform" action="exercise.asp?filename=exercise_html_headings1" method="post" target="_blank">
<h2>Test Yourself With Exercises</h2>
<div class="exercisewindow">
<h2>Exercise:</h2>
<p>Use the correct HTML tag to add a heading with the text "London".</p>
<div class="exerciseprecontainer">
<input name="ex1" maxlength="15" style="width: 155px;">
<br>
<br>
&lt;p&gt;London is the capital city of England.
It is the most populous city in the United Kingdom,
with a metropolitan area of over 13 million inhabitants.&lt;/p&gt;
</div>
<br>
<button type="submit" class="w3-btn w3-margin-bottom">Submit Answer »</button>
<p><a target="_blank" href="exercise.asp?filename=exercise_html_headings1">Start the Exercise</a></p>
</div>
</form>
<hr>

<h2>HTML Tag Reference</h2>
<p>W3Schools'' tag reference contains additional information about these tags and their attributes.</p>
<table class="w3-table-all notranslate">
<tbody><tr>
  <th>Tag</th>
  <th>Description</th>
</tr>
<tr>
  <td><a href="/tags/tag_html.asp">&lt;html&gt;</a></td>
  <td>Defines the root of an HTML document</td>
</tr>
<tr>
  <td><a href="/tags/tag_body.asp">&lt;body&gt;</a></td>
  <td>Defines the document''s body</td>
</tr>
<tr>
  <td><a href="/tags/tag_hn.asp">&lt;h1&gt; to &lt;h6&gt;</a></td>
  <td>Defines HTML headings</td>
</tr>
</tbody></table>

<div class="w3-note w3-panel">
  <p>For a complete list of all available HTML tags, visit our <a href="/tags/default.asp">HTML Tag Reference</a>.</p>
</div>

<br>
<div class="w3-clear nextprev">
<a class="w3-left w3-btn" href="html_attributes.asp">❮ Previous</a>
<a class="w3-right w3-btn" href="html_paragraphs.asp">Next ❯</a>
</div>
<div id="mypagediv2" style="position:relative;text-align:center;"></div>
<br>

</div>', 5),
	(2, '<div class="w3-col l10 m12" id="main">
      <div id="mainLeaderboard" style="overflow:hidden;">
        <!-- MainLeaderboard-->
        
        <div id="div-gpt-ad-1422003450156-2">
          <script type="text/javascript">googletag.cmd.push(function() { googletag.display(''div-gpt-ad-1422003450156-2''); });</script>
        </div>
       
      </div>
<h1>HTML <span class="color_h1">Colors</span></h1>
<div class="w3-clear nextprev">
<a class="w3-left w3-btn" href="html_comments.asp">❮ Previous</a>
<a class="w3-right w3-btn" href="html_colors_rgb.asp">Next ❯</a>
</div>
<hr>
<p class="intro">HTML colors are specified with predefined color names, or with 
RGB, HEX, HSL, RGBA, or HSLA values.</p>
<hr>

<h2>Color Names</h2>
<p>In HTML, a color can be specified by using a color name:</p>
<div class="w3-row w3-center" style="margin:0 -16px;line-height:80px;color:white;">
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:tomato;">Tomato</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:orange;">Orange</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:dodgerblue;">DodgerBlue</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:mediumseagreen;">MediumSeaGreen</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:gray;">Gray</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:slateblue;">SlateBlue</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:violet;">Violet</div>
  </div>
  <div class="w3-col l3 m6 w3-padding">
    <div style="background-color:lightgray;color:#444444">LightGray</div>
  </div>
</div>
<p>
<a target="_blank" href="tryit.asp?filename=tryhtml_color_names" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</p>
<p>HTML supports <a href="/colors/colors_names.asp">140 standard color names</a>.</p>
<hr>

<h2>Background Color</h2>
<p>You can set the background color for HTML elements:</p>

<div style="background-color:dodgerblue; text-align:center;color:white;font-size:24px;">Hello World</div>
<br>
<div class="w3-container" style="background-color:tomato;color:white;"><br>
  Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.
  Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.<br><br>
</div>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:DodgerBlue;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Hello World<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:Tomato;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Lorem 
  ipsum...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
<br>
<a target="_blank" href="tryit.asp?filename=tryhtml_color_background" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<hr>
<h2>Text Color</h2>
<p>You can set the color of text:</p>
<h3 style="color:tomato">Hello World</h3>
<p style="color:dodgerblue">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>
<p style="color:mediumseagreen">Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.</p>

<div class="w3-example">
 <h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="color:Tomato;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Hello 
  World<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="color:DodgerBlue;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Lorem 
  ipsum...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>p<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="color:MediumSeaGreen;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Ut wisi 
  enim...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/p<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
<a target="_blank" href="tryit.asp?filename=tryhtml_color_text" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<hr>
<h2>Border Color</h2>
<p>You can set the color of borders:</p>
<h2 style="border: 2px solid Tomato;">Hello World</h2>
<h2 style="border: 2px solid DodgerBlue;">Hello World</h2>
<h2 style="border: 2px solid Violet;">Hello World</h2>

<div class="w3-example">
 <h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="border:2px 
  solid Tomato;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Hello 
  World<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="border:2px 
  solid DodgerBlue;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Hello 
  World<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="border:2px 
  solid Violet;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>Hello 
  World<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
<a target="_blank" href="tryit.asp?filename=tryhtml_color_border" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<hr>
<h2>Color Values</h2>
<p>In HTML, colors can also be specified using RGB values, HEX values, HSL 
values, RGBA values, and HSLA values.</p>
<p>The following three &lt;div&gt; elements have their background color set with RGB, 
HEX, and HSL values:</p>

<div class="w3-center" style="line-height:60px;color:white;font-size:20px;font-weight:bold;font-family:Consolas, ''Courier New'', Courier, monospace">
  <div style="background-color:rgb(255, 99, 71);margin:10px 0;">rgb(255, 99, 71)</div>
  <div style="background-color:#ff6347;margin:10px 0;">#ff6347</div>
  <div style="background-color:hsl(9, 100%, 64%);margin:10px 0;">hsl(9, 100%, 64%)</div>
</div>
<p>The following two &lt;div&gt; elements have their background color set with RGBA 
and HSLA values, which adds an Alpha channel to the color (here we have 50% 
transparency):</p>
<div class="w3-center" style="line-height:60px;color:white;font-size:20px;font-weight:bold;font-family:Consolas, ''Courier New'', Courier, monospace">
  <div style="background-color:rgba(255, 99, 71, 0.5);margin:10px 0;">rgba(255, 99, 71, 0.5)</div>
  <div style="background-color:hsla(9, 100%, 64%, 0.5);margin:10px 0;">hsla(9, 100%, 64%, 0.5)</div>
</div>

<div class="w3-example">
 <h3>Example</h3>
<div class="w3-code notranslate htmlHigh">
  <span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:rgb(255, 
  99, 71);"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:#ff6347;"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:hsl(9, 
  100%, 64%);"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:rgba(255, 
  99, 71, 0.5);"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span><br><span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>h1<span class="attributecolor" style="color:red"> style<span class="attributevaluecolor" style="color:mediumblue">="background-color:hsla(9, 
  100%, 64%, 0.5);"</span></span><span class="tagcolor" style="color:mediumblue">&gt;</span></span>...<span class="tagnamecolor" style="color:brown"><span class="tagcolor" style="color:mediumblue">&lt;</span>/h1<span class="tagcolor" style="color:mediumblue">&gt;</span></span> </div>
<a target="_blank" href="tryit.asp?filename=tryhtml_color_values" class="w3-btn w3-margin-bottom">Try it Yourself »</a>
</div>

<div class="w3-note w3-panel">
<h3>Learn more about Color Values</h3>
<p>You will learn more about <a href="html_colors_rgb.asp">RGB</a>, <a href="html_colors_hex.asp">HEX</a> and <a href="html_colors_hsl.asp">HSL</a> in the next chapters.</p>
</div>

<br>
<div class="w3-clear nextprev">
<a class="w3-left w3-btn" href="html_comments.asp">❮ Previous</a>
<a class="w3-right w3-btn" href="html_colors_rgb.asp">Next ❯</a>
</div>
<div id="mypagediv2" style="position:relative;text-align:center;"></div>
<br>

</div>', 4);


--
-- Data for Name: Egzersizler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Egzersizler" VALUES
	(4, '<p>Use CSS to set the text size to 50 pixels.</p>', '<div id="assignmentcontainer" style="overflow:auto;padding-top:30px;">
&lt;p style="<pre class="meassureInputWidth" style="display: none;">w3exercise_input_no_0</pre><input spellcheck="false" class="editablesection" onkeypress="checkKey(event)" oninput="writinginput(this, 0)" maxlength="9" style="width: 99px;">:50px;"&gt;This is a paragraph.&lt;/p&gt;
</div>', 'font-size', 10),
	(3, '<p>Insert the missing part of the code below to output "Hello World".</p>', '<pre id="assignmentcontainer" style="overflow:auto">
<pre class="meassureInputWidth" style="display: none;">w3exercise_input_no_0</pre><input spellcheck="false" class="editablesection" onkeypress="checkKey(event)" oninput="writinginput(this, 0)" maxlength="5" style="width: 55px;"> "Hello World";
</pre>', 'echo', 10);


--
-- Data for Name: Erisimler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Erisimler" VALUES
	(1, 1, '2012-01-14', '88.123.43.21'),
	(2, 1, '2012-02-21', '88.123.42.11'),
	(3, 2, '2012-04-23', '43.124.54.23'),
	(4, 2, '2012-06-23', '43.43.21.126'),
	(5, 3, '2013-05-21', '54.65.231.56'),
	(6, 3, '2014-06-12', '25.224.12.54'),
	(7, 4, '2014-11-15', '54.111.32.43'),
	(8, 4, '2015-12-12', '125.23.43.54'),
	(9, 5, '2014-01-12', '43.76.45.34'),
	(10, 5, '2014-09-11', '123.44.32.12');


--
-- Data for Name: Fotograflar; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Fotograflar" VALUES
	(1, 1024, 512, '/images/tshirt.jpg');


--
-- Data for Name: KullaniciTipleri; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."KullaniciTipleri" VALUES
	(1, 'yonetici'),
	(2, 'yazar'),
	(3, 'okuyucu');


--
-- Data for Name: Kullanicilar; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Kullanicilar" VALUES
	(1, 1, 'admin@w3schools.com', '123123', '2012-01-14'),
	(2, 2, 'yazar1@w3schools.com', 'asdqwe', '2012-04-23'),
	(3, 2, 'yazar2@w3schools.com', 'sifre123', '2013-05-21'),
	(4, 3, 'ahmet@gmail.com', 'ahmet', '2014-11-15'),
	(5, 3, 'can@hotmail.com', 'can123', '2014-01-12');


--
-- Data for Name: Okuyucular; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Okuyucular" VALUES
	(4, 0, 0, 0),
	(5, 120, 32, 41);


--
-- Data for Name: Ornekler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Ornekler" VALUES
	(7, '<!DOCTYPE html>
<html>
<body>

<p id="demo">Click the button to display the cookies associated with this document.</p>

<button onclick="myFunction()">Try it</button>

<script>
function myFunction() {
  document.getElementById("demo").innerHTML =
  "Cookies associated with this document: " + document.cookie;
}
</script>

</body>
</html>

', 'https://www.w3schools.com/js/tryit.asp?filename=tryjs_doc_cookie'),
	(6, '<!DOCTYPE html>
<html lang="en">
<head>
  <title>Bootstrap Example</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
</head>
<body>
  
<div class="container-fluid">
  <h1>My First Bootstrap Page</h1>      
  <p>This part is inside a .container-fluid class.</p> 
  <p>The .container-fluid class provides a full width container, spanning the entire width of the viewport.</p>           
</div>

</body>
</html>

', 'https://www.w3schools.com/bootstrap/tryit.asp?filename=trybs_gs_container-fluid&stacked=h');


--
-- Data for Name: QuizBasliklari; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."QuizBasliklari" VALUES
	(1, 'HTML'),
	(2, 'CSS'),
	(3, 'C++');


--
-- Data for Name: Quizler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Quizler" VALUES
	(5, 1, 'What does HTML stand for?', 'Hyperlinks and Text Markup Language', 'Home Tool Markup Language', 'Hyper Text Markup Language', 'c', 5);


--
-- Data for Name: SayfaGuncellemeleri; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."SayfaGuncellemeleri" VALUES
	(1, 3, 2, '2016-05-12', 'Bazi eklemeler yapildi.'),
	(2, 2, 3, '2016-06-12', 'Yanlışlıklar düzeltildi.'),
	(3, 2, 4, '2016-07-12', 'Duzeltmeler yapildi.'),
	(4, 3, 4, '2016-08-16', 'Yanlisliklar duzeltildi.'),
	(5, 3, 7, '2016-03-03', 'Duzeltmeler yapildi.'),
	(6, 3, 8, '2016-05-05', 'Bazi degisiklikler yapildi.');


--
-- Data for Name: SayfaTipleri; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."SayfaTipleri" VALUES
	(1, 'egitim'),
	(2, 'egzersiz'),
	(3, 'quiz'),
	(4, 'ornek'),
	(5, 'diger');


--
-- Data for Name: SayfaYetkileri; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."SayfaYetkileri" VALUES
	(1, 2, 1),
	(2, 2, 2),
	(3, 3, 3),
	(4, 3, 4),
	(5, 2, 5);


--
-- Data for Name: Sayfalar; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Sayfalar" VALUES
	(1, 1, 2, '2016-12-23', '2016-12-23', 0, false),
	(2, 1, 3, '2016-01-12', '2016-05-12', 12, true),
	(3, 2, 2, '2016-05-16', '2016-06-12', 120, true),
	(4, 2, 3, '2016-06-12', '2016-08-16', 111, true),
	(5, 3, 2, '2016-04-12', '2016-04-12', 0, false),
	(6, 4, 2, '2016-01-01', '2016-01-01', 11, true),
	(7, 4, 3, '2016-01-01', '2016-03-03', 0, false),
	(8, 5, 2, '2016-03-05', '2016-05-05', 12, true),
	(9, 5, 3, '2016-06-06', '2016-06-06', 0, false);


--
-- Data for Name: SertifikaAlimlari; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."SertifikaAlimlari" VALUES
	(1, 4, 2, true, '2017-01-01', 86, false),
	(2, 5, 1, false, '2017-01-06', 60, true);


--
-- Data for Name: Sertifikalar; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Sertifikalar" VALUES
	(1, 'HTML', '$90.00', 70),
	(2, 'SQL', '$80.00', 80);


--
-- Data for Name: YapilanEgitimler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."YapilanEgitimler" VALUES
	(1, 4, 1);


--
-- Data for Name: YapilanEgzersizler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."YapilanEgzersizler" VALUES
	(1, 5, 4);


--
-- Data for Name: YapilanQuizler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."YapilanQuizler" VALUES
	(1, 4, 1),
	(2, 5, 1);


--
-- Data for Name: Yazarlar; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Yazarlar" VALUES
	(2),
	(3);


--
-- Data for Name: Yetkiler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Yetkiler" VALUES
	(1, 'sayfa-guncelleme', true, true, false, false),
	(2, 'site-goruntuleme', true, true, true, true),
	(3, 'yazi-ekleme', true, true, false, false);


--
-- Data for Name: Yoneticiler; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public."Yoneticiler" VALUES
	(1);


--
-- Name: Afisler_afisNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Afisler_afisNo_seq"', 3, true);


--
-- Name: Ayarlar_ayarNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Ayarlar_ayarNo_seq"', 2, true);


--
-- Name: Digerler_sayfaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Digerler_sayfaNo_seq"', 1, false);


--
-- Name: Egitimler_sayfaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Egitimler_sayfaNo_seq"', 1, false);


--
-- Name: Egzersizler_sayfaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Egzersizler_sayfaNo_seq"', 1, false);


--
-- Name: Erisimler_erisenKullanici_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Erisimler_erisenKullanici_seq"', 1, false);


--
-- Name: Erisimler_erisimNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Erisimler_erisimNo_seq"', 10, true);


--
-- Name: Fotograflar_fotografNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Fotograflar_fotografNo_seq"', 1, true);


--
-- Name: KullaniciTipleri_tipNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."KullaniciTipleri_tipNo_seq"', 3, true);


--
-- Name: Kullanicilar_kullaniciNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Kullanicilar_kullaniciNo_seq"', 5, true);


--
-- Name: Kullanicilar_kullaniciTipi_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Kullanicilar_kullaniciTipi_seq"', 1, false);


--
-- Name: Okuyucular_kullaniciNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Okuyucular_kullaniciNo_seq"', 1, false);


--
-- Name: Ornekler_sayfaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Ornekler_sayfaNo_seq"', 1, false);


--
-- Name: QuizBasliklari_baslikNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."QuizBasliklari_baslikNo_seq"', 3, true);


--
-- Name: Quizler_baslik_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Quizler_baslik_seq"', 1, false);


--
-- Name: Quizler_sayfaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Quizler_sayfaNo_seq"', 1, false);


--
-- Name: SayfaGuncellemeleri_guncellemeNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaGuncellemeleri_guncellemeNo_seq"', 6, true);


--
-- Name: SayfaGuncellemeleri_guncellenenSayfa_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaGuncellemeleri_guncellenenSayfa_seq"', 1, false);


--
-- Name: SayfaGuncellemeleri_guncelleyenYazar_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaGuncellemeleri_guncelleyenYazar_seq"', 1, false);


--
-- Name: SayfaTipleri_tipNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaTipleri_tipNo_seq"', 5, true);


--
-- Name: SayfaYetkileri_sayfaYetkisiNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaYetkileri_sayfaYetkisiNo_seq"', 5, true);


--
-- Name: SayfaYetkileri_yetkiliOlunanSayfaTipi_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaYetkileri_yetkiliOlunanSayfaTipi_seq"', 1, false);


--
-- Name: SayfaYetkileri_yetkiliYazar_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SayfaYetkileri_yetkiliYazar_seq"', 1, false);


--
-- Name: Sayfalar_olusturanYazar_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Sayfalar_olusturanYazar_seq"', 1, false);


--
-- Name: Sayfalar_sayfaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Sayfalar_sayfaNo_seq"', 9, true);


--
-- Name: Sayfalar_sayfaTipi_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Sayfalar_sayfaTipi_seq"', 1, false);


--
-- Name: SertifikaAlimlari_alanKullanici_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SertifikaAlimlari_alanKullanici_seq"', 1, false);


--
-- Name: SertifikaAlimlari_alimNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SertifikaAlimlari_alimNo_seq"', 2, true);


--
-- Name: SertifikaAlimlari_alinanSertifika_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."SertifikaAlimlari_alinanSertifika_seq"', 1, false);


--
-- Name: Sertifikalar_sertifikaNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Sertifikalar_sertifikaNo_seq"', 2, true);


--
-- Name: YapilanEgitimler_yapanKullanici_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanEgitimler_yapanKullanici_seq"', 1, false);


--
-- Name: YapilanEgitimler_yapilanEgitimNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanEgitimler_yapilanEgitimNo_seq"', 1, true);


--
-- Name: YapilanEgitimler_yapilanEgitim_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanEgitimler_yapilanEgitim_seq"', 1, false);


--
-- Name: YapilanEgzersizler_yapanKullanici_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanEgzersizler_yapanKullanici_seq"', 1, false);


--
-- Name: YapilanEgzersizler_yapilanEgzersizNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanEgzersizler_yapilanEgzersizNo_seq"', 1, true);


--
-- Name: YapilanEgzersizler_yapilanEgzersiz_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanEgzersizler_yapilanEgzersiz_seq"', 1, false);


--
-- Name: YapilanQuizler_yapanKullanici_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanQuizler_yapanKullanici_seq"', 1, false);


--
-- Name: YapilanQuizler_yapilanQuizNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanQuizler_yapilanQuizNo_seq"', 2, true);


--
-- Name: YapilanQuizler_yapilanQuiz_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."YapilanQuizler_yapilanQuiz_seq"', 1, false);


--
-- Name: Yazarlar_kullaniciNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Yazarlar_kullaniciNo_seq"', 2, true);


--
-- Name: Yetkiler_yetkiNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Yetkiler_yetkiNo_seq"', 3, true);


--
-- Name: Yoneticiler_kullaniciNo_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public."Yoneticiler_kullaniciNo_seq"', 1, false);


--
-- Name: Okuyucular OkuyucularPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Okuyucular"
    ADD CONSTRAINT "OkuyucularPK" PRIMARY KEY ("kullaniciNo");


--
-- Name: Yazarlar YazarlarPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yazarlar"
    ADD CONSTRAINT "YazarlarPK" PRIMARY KEY ("kullaniciNo");


--
-- Name: Yoneticiler YoneticilerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yoneticiler"
    ADD CONSTRAINT "YoneticilerPK" PRIMARY KEY ("kullaniciNo");


--
-- Name: Afisler afislerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Afisler"
    ADD CONSTRAINT "afislerPK" PRIMARY KEY ("afisNo");


--
-- Name: Ayarlar ayarlarPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ayarlar"
    ADD CONSTRAINT "ayarlarPK" PRIMARY KEY ("ayarNo");


--
-- Name: Ayarlar ayarlarUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ayarlar"
    ADD CONSTRAINT "ayarlarUnique" UNIQUE (ayar);


--
-- Name: Digerler digerlerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Digerler"
    ADD CONSTRAINT "digerlerPK" PRIMARY KEY ("sayfaNo");


--
-- Name: Egitimler egitimPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egitimler"
    ADD CONSTRAINT "egitimPK" PRIMARY KEY ("sayfaNo");


--
-- Name: Egzersizler egzersizPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egzersizler"
    ADD CONSTRAINT "egzersizPK" PRIMARY KEY ("sayfaNo");


--
-- Name: Egzersizler egzersizlerUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egzersizler"
    ADD CONSTRAINT "egzersizlerUnique" UNIQUE (soru);


--
-- Name: Erisimler erisimlerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Erisimler"
    ADD CONSTRAINT "erisimlerPK" PRIMARY KEY ("erisimNo");


--
-- Name: Fotograflar fotograflarPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Fotograflar"
    ADD CONSTRAINT "fotograflarPK" PRIMARY KEY ("fotografNo");


--
-- Name: Fotograflar fotograflarUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Fotograflar"
    ADD CONSTRAINT "fotograflarUnique" UNIQUE ("dosyaYolu");


--
-- Name: KullaniciTipleri kullaniciTipleriPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."KullaniciTipleri"
    ADD CONSTRAINT "kullaniciTipleriPK" PRIMARY KEY ("tipNo");


--
-- Name: KullaniciTipleri kullaniciTipleriUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."KullaniciTipleri"
    ADD CONSTRAINT "kullaniciTipleriUnique" UNIQUE ("tipAdi");


--
-- Name: Kullanicilar kullanicilarPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Kullanicilar"
    ADD CONSTRAINT "kullanicilarPK" PRIMARY KEY ("kullaniciNo");


--
-- Name: Kullanicilar kullanicilarUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Kullanicilar"
    ADD CONSTRAINT "kullanicilarUnique" UNIQUE (eposta);


--
-- Name: Ornekler orneklerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ornekler"
    ADD CONSTRAINT "orneklerPK" PRIMARY KEY ("sayfaNo");


--
-- Name: Ornekler orneklerUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ornekler"
    ADD CONSTRAINT "orneklerUnique" UNIQUE (link);


--
-- Name: QuizBasliklari quizBasliklariPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."QuizBasliklari"
    ADD CONSTRAINT "quizBasliklariPK" PRIMARY KEY ("baslikNo");


--
-- Name: QuizBasliklari quizBasliklariUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."QuizBasliklari"
    ADD CONSTRAINT "quizBasliklariUnique" UNIQUE (baslik);


--
-- Name: Quizler quizPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Quizler"
    ADD CONSTRAINT "quizPK" PRIMARY KEY ("sayfaNo");


--
-- Name: SayfaGuncellemeleri sayfaGuncellemeleriPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaGuncellemeleri"
    ADD CONSTRAINT "sayfaGuncellemeleriPK" PRIMARY KEY ("guncellemeNo");


--
-- Name: SayfaTipleri sayfaTipleriPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaTipleri"
    ADD CONSTRAINT "sayfaTipleriPK" PRIMARY KEY ("tipNo");


--
-- Name: SayfaTipleri sayfaTipleriUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaTipleri"
    ADD CONSTRAINT "sayfaTipleriUnique" UNIQUE ("tipAdi");


--
-- Name: SayfaYetkileri sayfaYetkileriPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaYetkileri"
    ADD CONSTRAINT "sayfaYetkileriPK" PRIMARY KEY ("sayfaYetkisiNo");


--
-- Name: Sayfalar sayfalarPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sayfalar"
    ADD CONSTRAINT "sayfalarPK" PRIMARY KEY ("sayfaNo");


--
-- Name: SertifikaAlimlari sertifikaAlimlariPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SertifikaAlimlari"
    ADD CONSTRAINT "sertifikaAlimlariPK" PRIMARY KEY ("alimNo");


--
-- Name: Sertifikalar sertifikalarPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sertifikalar"
    ADD CONSTRAINT "sertifikalarPK" PRIMARY KEY ("sertifikaNo");


--
-- Name: Sertifikalar sertifikalarUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sertifikalar"
    ADD CONSTRAINT "sertifikalarUnique" UNIQUE (ad);


--
-- Name: YapilanEgitimler yapilanEgitimlerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgitimler"
    ADD CONSTRAINT "yapilanEgitimlerPK" PRIMARY KEY ("yapilanEgitimNo");


--
-- Name: YapilanEgzersizler yapilanEgzersizlerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgzersizler"
    ADD CONSTRAINT "yapilanEgzersizlerPK" PRIMARY KEY ("yapilanEgzersizNo");


--
-- Name: YapilanQuizler yapilanQuizlerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanQuizler"
    ADD CONSTRAINT "yapilanQuizlerPK" PRIMARY KEY ("yapilanQuizNo");


--
-- Name: Yetkiler yetkilerPK; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yetkiler"
    ADD CONSTRAINT "yetkilerPK" PRIMARY KEY ("yetkiNo");


--
-- Name: Yetkiler yetkilerUnique; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yetkiler"
    ADD CONSTRAINT "yetkilerUnique" UNIQUE (yetki);


--
-- Name: Digerler DigerSayfalari; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Digerler"
    ADD CONSTRAINT "DigerSayfalari" FOREIGN KEY ("sayfaNo") REFERENCES public."Sayfalar"("sayfaNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Egitimler EgitimSayfalari; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egitimler"
    ADD CONSTRAINT "EgitimSayfalari" FOREIGN KEY ("sayfaNo") REFERENCES public."Sayfalar"("sayfaNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Egzersizler EgzersizSayfalari; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Egzersizler"
    ADD CONSTRAINT "EgzersizSayfalari" FOREIGN KEY ("sayfaNo") REFERENCES public."Sayfalar"("sayfaNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Okuyucular OkuyucuKullanici; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Okuyucular"
    ADD CONSTRAINT "OkuyucuKullanici" FOREIGN KEY ("kullaniciNo") REFERENCES public."Kullanicilar"("kullaniciNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Ornekler OrnekSayfalari; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Ornekler"
    ADD CONSTRAINT "OrnekSayfalari" FOREIGN KEY ("sayfaNo") REFERENCES public."Sayfalar"("sayfaNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Quizler QuizSayfalari; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Quizler"
    ADD CONSTRAINT "QuizSayfalari" FOREIGN KEY ("sayfaNo") REFERENCES public."Sayfalar"("sayfaNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Yazarlar YazarKullanici; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yazarlar"
    ADD CONSTRAINT "YazarKullanici" FOREIGN KEY ("kullaniciNo") REFERENCES public."Kullanicilar"("kullaniciNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Yoneticiler YoneticiKullanici; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Yoneticiler"
    ADD CONSTRAINT "YoneticiKullanici" FOREIGN KEY ("kullaniciNo") REFERENCES public."Kullanicilar"("kullaniciNo") ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: Erisimler erisimlerFK; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Erisimler"
    ADD CONSTRAINT "erisimlerFK" FOREIGN KEY ("erisenKullanici") REFERENCES public."Kullanicilar"("kullaniciNo");


--
-- Name: Kullanicilar kullanicilarFK; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Kullanicilar"
    ADD CONSTRAINT "kullanicilarFK" FOREIGN KEY ("kullaniciTipi") REFERENCES public."KullaniciTipleri"("tipNo");


--
-- Name: Quizler quizFK; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Quizler"
    ADD CONSTRAINT "quizFK" FOREIGN KEY (baslik) REFERENCES public."QuizBasliklari"("baslikNo");


--
-- Name: SayfaGuncellemeleri sayfaGuncellemeleriFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaGuncellemeleri"
    ADD CONSTRAINT "sayfaGuncellemeleriFK1" FOREIGN KEY ("guncelleyenYazar") REFERENCES public."Yazarlar"("kullaniciNo");


--
-- Name: SayfaGuncellemeleri sayfaGuncellemeleriFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaGuncellemeleri"
    ADD CONSTRAINT "sayfaGuncellemeleriFK2" FOREIGN KEY ("guncellenenSayfa") REFERENCES public."Sayfalar"("sayfaNo");


--
-- Name: SayfaYetkileri sayfaYetkileriFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaYetkileri"
    ADD CONSTRAINT "sayfaYetkileriFK1" FOREIGN KEY ("yetkiliYazar") REFERENCES public."Yazarlar"("kullaniciNo");


--
-- Name: SayfaYetkileri sayfaYetkileriFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SayfaYetkileri"
    ADD CONSTRAINT "sayfaYetkileriFK2" FOREIGN KEY ("yetkiliOlunanSayfaTipi") REFERENCES public."SayfaTipleri"("tipNo");


--
-- Name: Sayfalar sayfalarFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sayfalar"
    ADD CONSTRAINT "sayfalarFK1" FOREIGN KEY ("sayfaTipi") REFERENCES public."SayfaTipleri"("tipNo");


--
-- Name: Sayfalar sayfalarFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Sayfalar"
    ADD CONSTRAINT "sayfalarFK2" FOREIGN KEY ("olusturanYazar") REFERENCES public."Yazarlar"("kullaniciNo");


--
-- Name: SertifikaAlimlari sertifikaAlimlariFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SertifikaAlimlari"
    ADD CONSTRAINT "sertifikaAlimlariFK1" FOREIGN KEY ("alanKullanici") REFERENCES public."Okuyucular"("kullaniciNo");


--
-- Name: SertifikaAlimlari sertifikaAlimlariFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."SertifikaAlimlari"
    ADD CONSTRAINT "sertifikaAlimlariFK2" FOREIGN KEY ("alinanSertifika") REFERENCES public."Sertifikalar"("sertifikaNo");


--
-- Name: YapilanEgitimler yapilanEgitimlerFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgitimler"
    ADD CONSTRAINT "yapilanEgitimlerFK1" FOREIGN KEY ("yapanKullanici") REFERENCES public."Okuyucular"("kullaniciNo");


--
-- Name: YapilanEgitimler yapilanEgitimlerFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgitimler"
    ADD CONSTRAINT "yapilanEgitimlerFK2" FOREIGN KEY ("yapilanEgitim") REFERENCES public."Egitimler"("sayfaNo");


--
-- Name: YapilanEgzersizler yapilanEgzersizlerFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgzersizler"
    ADD CONSTRAINT "yapilanEgzersizlerFK1" FOREIGN KEY ("yapanKullanici") REFERENCES public."Okuyucular"("kullaniciNo");


--
-- Name: YapilanEgzersizler yapilanEgzersizlerFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanEgzersizler"
    ADD CONSTRAINT "yapilanEgzersizlerFK2" FOREIGN KEY ("yapilanEgzersiz") REFERENCES public."Egzersizler"("sayfaNo");


--
-- Name: YapilanQuizler yapilanQuizlerFK1; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanQuizler"
    ADD CONSTRAINT "yapilanQuizlerFK1" FOREIGN KEY ("yapanKullanici") REFERENCES public."Okuyucular"("kullaniciNo");


--
-- Name: YapilanQuizler yapilanQuizlerFK2; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."YapilanQuizler"
    ADD CONSTRAINT "yapilanQuizlerFK2" FOREIGN KEY ("yapilanQuiz") REFERENCES public."QuizBasliklari"("baslikNo");


--
-- PostgreSQL database dump complete
--

