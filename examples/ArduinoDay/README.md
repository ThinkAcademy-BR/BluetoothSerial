# Arduino Devices Example

Controle Devices do Arduino pelo celular.

## Arduino

Hardware
 * Arduino Uno
 * [SparkFun Bluetooth Mate Silver](https://www.sparkfun.com/products/10393)
 * [Curso Como Fazer Aplicativos](https://fb.com/comofazeraplicativos)

### Upload the sketch

Upload the [sketch](https://github.com/ThinkAcademy-BR/BluetoothSerial/blob/master/examples/ArduinoDay/Arduino/Pasta/Arquivo.ino) to your Uno using the Arduino IDE.

## Android

### Pair your phone

Pair your Android phone with the bluetooth adapter.

## PhoneGap - Android

This assumes you have the [Android SDK](http://developer.android.com/sdk/index.html) installed and $ANDROID_HOME/tools and $ANDROID_HOME/platform-tools in your system path.

Adding platforms generates the native project

    $ cordova platform add android
    
Install the Bluetooth Serial plugin with cordova

    $ cordova plugin add cordova-plugin-bluetooth-serial

Connect your phone to the computer.

Compile and run the application

    $ cordova run
    
Depois que o aplicativo for iniciado, conecte o bluetooth tocando no rótulo "Conectar". Ocasionalmente, leva algumas vezes para se conectar. Preste atenção para a luz de conexão verde no adaptador Bluetooth.

Ligue ou Desligue os Devices Conectados na Placa Arduino! =]

## iOS

Adding platforms generates the native project

    $ cordova platform add ios
    
Install the Bluetooth Serial plugin with cordova

    $ cordova plugin add cordova-plugin-bluetooth-serial
    $ cordova prepare
    $ open platforms/ios/Inova Prudente - Arduino Day.xcodeproj
    
Build the code and deploy to your iPhone using Xcode