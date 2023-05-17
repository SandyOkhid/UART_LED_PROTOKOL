# UART_LED_PROTOKOL
Detta projekt implementerar en UART-kommunikationsprotokoll på en STM32-mikrokontrollerplattform för att styra LED-lampor. Projektet är utformat för att erbjuda en lättanvänd och tillförlitlig lösning för att fjärrstyra LED-lampor via en seriell kommunikationslinje.

Syfte och mål: Syftet med projektet är att visa hur man kan använda UART-protokollet för att kommunicera med en STM32-mikrokontroller och styra LED-lampor. Målet med projektet är att erbjuda en grundlig förståelse av hur UART-kommunikation fungerar och hur man kan implementera en pålitlig och effektiv drivrutin för att hantera kommunikationen.

Struktur: Projektet består av följande filer och mappar:

src: Mapp som innehåller källkoden för projektet.. main.c: Huvudprogrammet som initierar UART-kommunikationen och LED-styrningen. uart.c: Implementeringen av UART-drivrutinen. led.c: Implementeringen av LED-drivrutinen. uart.h: Headerfil för UART-drivrutinen. led.h: Headerfil för LED-drivrutinen. include: Mapp som innehåller headerfiler för projektet.

Användning: För att använda projektet behöver du en STM32-mikrokontrollerplattform med stöd för UART-kommunikation och LED-lampor. Du kan ladda upp koden till mikrokontrollern och ansluta LED-lamporna till de utgångar som specificerats i LED-drivrutinen.

Begränsningar: Detta projekt är avsett att visa grundläggande funktionalitet för att styra LED-lampor med hjälp av UART-kommunikation på en STM32-mikrokontrollerplattform. Det är inte optimerat för prestanda eller energieffektivitet och bör inte användas i produktionssystem utan nödvändiga förbättringar och anpassningar.
UART står för Universal Asynchronous Receiver/Transmitter och är en typ av serieport som används för att skicka och ta emot data mellan enheter. UART är vanligtvis en del av mikrokontrollrar eller andra elektroniska enheter och används ofta för kommunikation mellan en dator och en annan enhet.

Viktiga förklaringar:
LED står för Light Emitting Diode, vilket är en halvledare som kan omvandla elektrisk energi till ljus. LED används ofta som en ljuskälla i elektroniska enheter.

Att kombinera LED med UART kan vara användbart i olika applikationer, till exempel för att skicka data till en enhet som styr en LED-belysning. Till exempel kan en mikrokontroller använda UART för att ta emot data från en dator och sedan styra en LED-belysning baserat på den mottagna datan.

Det finns också speciella LED-moduler som har inbyggda UART-kretsar för att enklare styra LED-belysningen. Dessa moduler kan vara användbara för applikationer som kräver avancerade ljuseffekter eller för att styra flera LED-lampor samtidigt.
