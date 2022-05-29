# ProjetoO2

#Criação de um protótipo de respirador de baixo custo com arduino

O projeto foi desenvolvido pensando numa forma acessível para construção de protótipo de respiradores pulmonares emergenciais transitórios, no contexto da COVID-19.
Governos no mundo inteiro não conseguiram suprir a alta demanda por respiradores e equipamentos hospitalares durante o surto de COVID. Desta forma, recorreram a montadoras de veículos, ONG's, entidades e universidades, em busca de tecnologias acessíveis que pudessem ser implementadas e constuídas em escala larga escala num curto período de tempo.
Este trabalho parte desta premissa. Foi construído sobre a plataforma arduino, utilizando linguagem C++, com recursos de fácil acesso, como arduino uno, sensores indutivos, motor nema etc.
Foi criado também um aplicativo android para controle do protótipo.

Segue link para baixar aplicativo android no site do MIT APP INVENTOR

http://ai2.appinventor.mit.edu/?locale=pt_BR#5090687866765312


Abaixo estão algumas tabelas com softwares, hardwares e demais componentes utilizados

<html>

<head>
<meta http-equiv=Content-Type content="text/html; charset=windows-1252">
<meta name=Generator content="Microsoft Word 15 (filtered)">


</head>

<body lang=PT-BR style='word-wrap:break-word'>

<div class=WordSection1>

<p class=MsoNormal>&nbsp;</p>

<table class=MsoNormalTable border=0 cellspacing=0 cellpadding=0 align=left
 width=566 style='width:424.75pt;border-collapse:collapse;margin-left:4.8pt;
 margin-right:4.8pt'>
 <tr>
  <td valign=top style='border:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;text-align:center;
  line-height:normal'><b><span style='font-size:12.0pt;font-family:"Arial",sans-serif;
  color:black'>SOFTWARE</span></b></p>
  </td>
  <td width=84 valign=top style='width:63.35pt;border:solid black 1.0pt;
  border-left:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;text-align:center;
  line-height:normal'><b><span style='font-size:12.0pt;font-family:"Arial",sans-serif;
  color:black'>LICENÇA</span></b></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Aplicativo
  Arduino em sua versão 1.8.16 - Windows Store 1.8.51.0</span></p>
  </td>
  <td width=84 valign=top style='width:63.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;text-align:center;
  line-height:normal'><span style='font-size:12.0pt;font-family:"Arial",sans-serif;
  color:black'>Gratuito</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Freetzing
  (ou similar)</span></p>
  </td>
  <td width=84 valign=top style='width:63.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;text-align:center;
  line-height:normal'><span style='font-size:12.0pt;font-family:"Arial",sans-serif;
  color:black'>Pago</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal>&nbsp;</p>

<p class=MsoNormal>&nbsp;</p>

<p class=MsoNormal>&nbsp;</p>

<p class=MsoNormal>&nbsp;</p>

<p class=MsoNormal>&nbsp;</p>

<table class=MsoNormalTable border=0 cellspacing=0 cellpadding=0 align=left
 style='border-collapse:collapse;margin-left:4.8pt;margin-right:4.8pt'>
 <tr>
  <td width=461 colspan=2 valign=top style='width:345.85pt;border:solid black 1.0pt;
  border-right:solid windowtext 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;text-align:center;
  line-height:normal'><b><span style='font-size:12.0pt;font-family:"Arial",sans-serif;
  color:black'>COMPONENTES / DESCRIÇÃO</span></b></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border:solid black 1.0pt;
  border-left:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><b><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>VALOR</span></b></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Times New Roman",serif'>2</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Arduinos
  Uno R3 ch 340 AT Mega 328</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 160,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Chave
  on/off gangorra 2 polos</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 1,90</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Driver
  TB6600 para motor de passo</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 69,01</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Módulo de
  isolamento optoacoplado 4 canais (ou 2 canais)</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 37,44</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1&nbsp;</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Motor de
  passo NEMA</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 173,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Plug Jack
  j-4 2,1 x 5,5 mm</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 1,20</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>2</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>sensores
  indutivos de proximidade NPN</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 52,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>4</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Cabinhos
  (fio) 22 AWG 0,30 mm cores</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 6,80</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Display
  LCD 20 x 04 azul/verde</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 36,95</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Módulo
  I2C para display LCD</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 14,70</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Módulo
  bluetooth Serial HC05</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 30,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Fonte de
  alimentação DC entre 6 e 15 Volts</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 20,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Sensor
  BMP 180</span></p>
  </td>
  <td width=104 valign=top style='width:78.35pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 16,90</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal>&nbsp;</p>



<p class=MsoNormal>&nbsp;</p>
<table class=MsoNormalTable border=0 cellspacing=0 cellpadding=0 align=left
 style='border-collapse:collapse;margin-left:4.8pt;margin-right:4.8pt'>
 <tr>
  <td colspan=2 valign=top style='border:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;text-align:center;
  line-height:normal'><b><span style='font-size:12.0pt;font-family:"Arial",sans-serif;
  color:black'>DESCRIÇÃO</span></b></p>
  </td>
  <td valign=top style='border:solid black 1.0pt;border-left:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><b><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>VALOR</span></b></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Arco de
  serra simples</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 20,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Cano PVC
  25 mm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 23,90</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1&nbsp;</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Cap solda
  25 mm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 1,50</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Chave de
  fenda (B) &#8539; x 4</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 5,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Fuso
  trapezoidal tr8 250 mm. passo 2+ Castanha metal CNC</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 55,33</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Lima
  chata de afiação</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 10,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Luva
  solda 25 mm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 0,70</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>par de
  corrediça metálica 45mm p/ 40kg</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 15,00</span></p>
  </td>
 </tr>
 <tr>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Lamina de
  serra manual 300mm 32 dentes</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 20,00</span></p>
  </td>
 </tr>
 <tr style='height:31.85pt'>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt;
  height:31.85pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:31.85pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Reanimador
  ADL silicone c/ reservatório</span></p>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>(ambu)&nbsp;</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:31.85pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 135,00</span></p>
  </td>
 </tr>
 <tr style='height:17.55pt'>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt;
  height:17.55pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:17.55pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Tê solda
  25mm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:17.55pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 2,00</span></p>
  </td>
 </tr>
 <tr style='height:17.25pt'>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt;
  height:17.25pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:17.25pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>tubo para
  solda c/4 mts</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:17.25pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 12,71</span></p>
  </td>
 </tr>
 <tr style='height:15.55pt'>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt;
  height:15.55pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>12</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:15.55pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>Parafusos
  10mm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:15.55pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 1,80</span></p>
  </td>
 </tr>
 <tr style='height:12.5pt'>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt;
  height:12.5pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>12</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:12.5pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>parafusos
  7mm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:12.5pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 1,50</span></p>
  </td>
 </tr>
 <tr style='height:17.15pt'>
  <td valign=top style='border:solid black 1.0pt;border-top:none;padding:5.0pt 5.0pt 5.0pt 5.0pt;
  height:17.15pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>1</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:17.15pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>kit
  jumper macho/fêmea 40 x 30 cm</span></p>
  </td>
  <td valign=top style='border-top:none;border-left:none;border-bottom:solid black 1.0pt;
  border-right:solid black 1.0pt;padding:5.0pt 5.0pt 5.0pt 5.0pt;height:17.15pt'>
  <p class=MsoNormal style='margin-bottom:0cm;line-height:normal'><span
  style='font-size:12.0pt;font-family:"Arial",sans-serif;color:black'>R$ 11,50</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal>&nbsp;</p>

</div>

</body>

</html>

