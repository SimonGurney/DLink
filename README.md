This is a fork of botamochi/Dlink, lots of kudos for the research into the digimon dlink protocol.

Also see their blog here: [https://botamochi.github.io/articles/analysis/dlink.html]

The original readme is below, but the author chose to use an Arduino UNO which operates at 5v and therefore needed complicated level shifting circuitry.  It is much easier to use a 3v device, in my case I used a Circuit Playground Express as I had one lying around.  With a 3.3v GPIO, you can interact directly with the digimon virtual pet.  

I built a small dock out of wood, nails and a hair bobble.  All you need is to get a reliable connection against the two pads on the v-pet.  

The front pad is for i/o and the rear pad is for ground.  With your arduino, connect the digitalPin of your choice (change the GPIO in the code) to the front pad and connect your GND to the v-pets rear pad.  


# 概要
Arduinoを使用してデジモンの液晶玩具と通信するためのライブラリです。
初代デジタルモンスターやデジモンペンデュラムで使用されている2端子コネクタの通信に対応しています。

# 参考回路
Arduino UNOのIOは5Vで駆動しているので育成ギアと接続する際はレベルシフトが必要です。
下の回路では3.3Vにレベルシフトしていますが本来は育成ギアの駆動電圧（コイン電池の3V）まで下げることが望ましいです。
![接続回路例](https://github.com/botamochi/DLink/blob/master/examples/wiring_diagram.png "Arduinoと育成ギアの接続回路例")
