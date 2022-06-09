import serial
import keyboard
import time
from threading import Thread

action_list={
    1 :"r",
    2 :"t",
    3 :"6",
    4 :"y",
    5 :"7",
    6 :"u",
    7 :"7",
    8 :"i",
    9 :"9",
    10:"o",
    11:"0",
    12:"p",
}



class Th(Thread):
    def __init__ (self, id_midi):
        Thread.__init__(self)
        self.id_midi = id_midi
    def run(self):
        comando=eval(self.id_midi)
        ### Executa Keyboard
        if comando[1] ==1:
            keyboard.press(action_list[comando[0]])
            print("Press: "+action_list[comando[0]])
        if comando[1] ==0:
            keyboard.release(action_list[comando[0]])
            print("Unpress: "+action_list[comando[0]])
        print ()

while True:
    try:
        arduino = serial.Serial('/dev/ttyUSB1', 115200)
        print('Arduino conectado')
        break
    except:
        pass
while True:
    msg = str(arduino.readline())
    msg = msg[2:-5]
    try:
 
        a = Th(msg.split(':')[-1])
        a.start() 
        
    except: 
        pass
    arduino.flush()
