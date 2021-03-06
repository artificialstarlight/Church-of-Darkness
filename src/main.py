import os
import sys
from commands import * 

def ch1():
    os.system('cls')
    print(color.PURPLE + """
Welcome to Church of Darkness.
Game created by artificialstarlight, ported to binary by fm'latghor.
Content licensed under CC BY-NC-SA 4.0, source code licensed under the
MIT license.

   Press ENTER to continue.
            """
          )
    pressenter = input()
    os.system('cls')
    print("It's dark.")
    pressenter = input()
    print("You can type 'help'...")
    ans = ""
    while ans != "help" or ans != "h":
       ans = input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "help" or ans == "h":
          help_command()
          print("")
          print("Be clear with what you want to say.")
          print("Keep your commands free of punctuation, weird spellings, or any such things.")
          print("")
          print("You can specify your commands, such as 'pick up box',")
          print("But don't be too specific with it.")
          print("For example, don't say 'pick up the small box in the corner over there.'")
          print("")
          print("You can also use aliases.")
          print("In which, 'inventory' is shortened to 'i', and so on.")
          print("")
          print("If you have any difficulties, try rewording your command.")
          print("Or use a different command altogether.")
          print("")
          print("Now you have at least some idea of what you're doing..")
          break
       if ans != "help":
          print("You didn't type 'help', did you?")
          print("Why do think you know what you're doing already?")
          print("Good luck.")
          break
  
    print("...")
    print("It's dark.")
    ans = ""
    while ans not in commands and ans not in aliases:
       ans = input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look" or ans =="l":
          print("You look around. You seem to be in what appears to be a small, old church.")
          print("It is empty except for some old pews and a dark shape in the corner.")
          print("It stinks of rot.")
       elif ans == "use" or ans == "u":
          print("Use? Use what?")
          print("Exactly, you have nothing you can use.")
       elif ans == "examine" or ans == "x":
         print("Examine what?")
       elif ans == "inventory" or ans == "i":
         inventory_command()
       elif ans == "run" or ans == "r":
         print("There's no need to run.")
       elif ans == "pick up" or ans == "p":
          print("Pick up what?")
       elif ans == "help" or ans == "h":
         help_command()
       else:
          print("What was that?")
    ans = ""
    result = False
    examinedcorner = False
    examinedpews = False
    while result == False:
       ans = input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look" or ans == "l":
          print("You look around. You seem to be in what appears to be an old church.")
          print("It is empty except for some old pews and a dark shape in the corner.")
          print("It stinks of rot.")
       elif ans == "use" or ans == "u":
          print("There's nothing you can use.")
       elif ans == "examine" or ans == "x":
          print("Examine what?")
       elif ans == "examine shape" or ans == "examine dark shape" or ans == "examine corner" or ans == "x shape" or ans == "x dark shape" or ans == "x corner":
          print("You walk over to the shape in the corner and...")
          print("The stench of the rotting flesh instantly hits you.")
          print("It's a dead deer, crawling with maggots, and it seems to have its throat slit.")
          examinedcorner = True
       elif examinedcorner == True and ans == "examine deer" or ans == "examine dead deer":
         print("Now, why would you do that?") 
       elif ans == "inventory" or ans == "i":
          inventory_command()
       elif ans == "help" or ans == "h":
          help_command()
       elif ans == "examine pews" or ans == "examine pew" or ans == "x pews" or ans == "x pew":
          print("You examine the pews. The wood is cracked and stained.")
          print("There's something wedged between the seats...")
          print("It's a bible, not out of place in a church.")
          print("However, it appears to be shiny and new, in contrast to")
          print("the decay surrounding you.")
          examinedpews = True
          result = True
       elif examinedcorner == False and ans == "run":
          print("There's no need to run.")
       elif examinedcorner == True and ans == "run":
         print("You try running away, but you don't get very far.")
         print("The door is locked and it won't budge.")
       elif ans == "pick up":
          print("There's nothing to pick up.")
       else:
         print("I'm not programmed to accept that answer.")

    ans = ""
    result = False
    examinedbible = False
    while result == False:
       ans = input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look" or ans == "l":
          print("You look around. There's not much else to see.")
          print("It's starting to get cold.")
       elif examinedcorner == True and ans == "examine deer" or ans == "examine dead deer" or ans == "x deer" or ans == "x dead deer":
         print("Now, why would you do that?")
       elif ans == "use" or ans == "u":
         print("There's nothing you can use.")
       elif ans == "inventory" or ans == "i":
         inventory_command()
       elif ans == "help" or ans == "h":
         help_command()
       elif examinedcorner == True and ans == "run" or ans == "r":
         print("You try running away, but you don't get very far.")
         print("The door is locked and it won't budge.")
       elif examinedcorner == False and ans == "examine shape" or ans == "examine dark shape" or ans == "examine corner" or ans == "x shape" or ans == "x dark shape" or ans == "x corner" :
          print("You walk over to the shape in the corner and...")
          print("The stench of the rotting flesh instantly hits you.")
          print("It's a dead deer, crawling with maggots, and it seems to have its throat slit.")
          examinedcorner = True
       elif ans == "pick up" or ans == "p":
         print("Pick up what?")
       elif ans == "examine" or ans == "x":
         print("Examine what?")
       elif ans == "examine bible" or ans == "examine the bible" or ans == "x bible" or ans == "x the bible":
         print("You open the Bible. The pages are stained with blood.")
         examinedbible = True
       elif examinedbible == True and ans == "pick up bible" or ans == "pick up the bible" or ans == "p bible" or ans == "p the bible":
         print("You pick up the Bible. You wish it wasn't so bloody, though.")
         print("Added to Inventory!")
         inventory.append("Bible")
         result = True
       elif examinedbible == False and ans == "pick up bible" or ans == "pick up the bible" or ans == "p bible" or ans == "p the bible":
         print("Shouldn't you take a closer look before you go about taking things?")
       elif examinedcorner == False and ans == "run" or ans == "r":
         print("There's no need to run.")
       elif ans == "use bible" or ans == "u bible":
          print("What would you even do with it?")
          print("You can't use that now.")
       else:
         print("What was that?")
    result = False
    while result == False:
       ans = input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look" or ans == "l":
          print("You look around, again.")
          print("Nothing seems to be any different.")
       elif ans == "inventory" or ans == "i":
          inventory_command()
       elif ans == "help" or ans == "h":
          help_command()
       elif ans == "examine" or ans == "x":
          print("There's nothing more to examine.")
       elif ans == "use" or ans == "u":
          print("Use what?")
       elif ans == "pick up" or ans == "p":
          print("Pick up what?")
       elif ans == "pick up bible" or ans == "p bible":
          print("You already have the Bible.")
       elif ans == "use bible" or ans == "u bible":
          print("What would you even do with it?")
          print("It's too dark to make out any words.")
       elif ans == "run" or ans == "r":
          print("You try to run. The old windows won't break,")
          print("no matter how hard you hit your pathetic fists against them.")
          print("The door still won't budge, either.")
          print("Frantically, you try again and again to escape, to no avail.")
          print("You become aware of a prescence behind you as suddenly you")
          print("start to get dizzy...")
          pressenter = input()
          result = True
       else:
          print("I don't understand.")
def ch2():
   print("")
   print("")
   print("")
   print("")
   print("...")
   print("...")
   print(color.RED + "...!!!!" + color.END)
   print("You wake up.")
   print("You weren't aware that you were ever unconscious in the first place.")
   print("It's still dark, except you are aware of a faint, flickering light")
   print("coming from somewhere a little further away.")
   result = False
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "look" or ans == "l":
         print("You look around. The light's coming from what remains of")
         print("the altar.")
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "help" or ans == "h":
         help_command()
      elif ans == "use" or ans == "u":
          print("Use what?")
      elif ans == "pick up" or ans == "p":
          print("Pick up what?")
      elif ans == "run" or ans == "r":
         print("Do you really want to try that again?")
         print("Besides, you don't seem to have the energy to, anyway.")
      elif ans == "examine":
         print("examine what?")
      elif ans == "examine light" or ans == "examine altar" or ans == "x light" or ans == "x altar":
         print("You walk over to the light. It's a flickering white candle,")
         print("burned almost halfway through.")
         print("It's just enough light to read by.")
      elif ans == "use bible" or ans == "read bible" or ans == "u bible":
         print("You open the Bible to a random page.")
         print("Psalm 106:37-38...")
         print("'They sacrificed their sons and daughters to false gods.")
         print("They shed innocent blood, the blood of their sons and daughters,")
         print("whom they sacrificed to the idols of Canaan, and the land was")
         print("desecrated by their blood.'")
         result = True
      elif ans == "pick up candle" or ans == "p candle":
         print("You try to touch it, but it burns your fingers.")
      elif ans == "examine shape" or ans == "examine corner" or ans == "x shape" or ans == "x corner":
         print("There's nothing there anymore, except for a dark stain and the")
         print("lingering smell of rot.")
      else:
         print("Excuse me?")
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "look":
         print("You look around. The candle is slowly burning down...")
         print("Out of the corner of your eye, you notice a flash of silver")
         print("underneath the altar.")
      elif ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "run" or ans == "r":
         print("You feel as if something is weighing you down..")
         print("You couldn't run if you tried.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "pick up candle" or ans == "p candle":
         print("You try, but the wax burns your fingers.")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "examine silver" or ans == "examine flash" or ans == "examine altar" or ans == "x silver" or ans == "x flash" or ans == "x altar":
         print("You look underneath the altar..It's a shiny, fresh razor blade.")
         print("You're unsure of how that even got there, but that's the least of your problems.")
      elif ans == "examine blade" or ans == "examine razor blade" or ans == "x blade" or ans == "x razor blade":
         print("It's new. Shiny. And most surprisingly, there's no blood on it at all.")
      elif ans == "pick up blade" or ans == "pick up razor blade" or ans == "p blade" or ans == "p razor blade":
         print("You don't want to pick it up.")
         print("It's disturbing that something like that's even here.")
         print("If everything else wasn't disturbing enough, that is.")
         print("Still, you were commanded to pick it up, and since you can't find a reason")
         print("*not* to pick it up, pathetic human, you do so anyway, against your")
         print("better judgement.")
         print("")
         print("Added to inventory!")
         inventory.append("Razor Blade")
         result = True
      elif ans == "use bible" or ans == "u bible":
         print("You don't know if you want to read any further.")
         print("You feel like you should look around some more")
         print("while the candle is still burning.")
      else:
         print("Your foolish answers make no sense.")
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "run":
         print("You feel as if something is weighing you down..")
         print("You couldn't run if you tried.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "pick up candle" or ans == "p candle":
         print("You try, but the wax burns your fingers.")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "examine altar" or ans == "x altar":
         print("There's nothing else there.")
      elif ans == "look" or ans == "l":
         print("By the dying candlelight, you slowly take a few steps.")
         print("Your fingers brush against the rough walls..")
         print("You feel unexpected ridges and grooves, as if someone")
         print("had carved something there.")
      elif ans == "use bible" or ans == "u bible":
         print("Reading the Bible won't save you.")
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "examine wall" or ans == "x wall":
         print("You take a step back. You can make out a crude etching of a")
         print("strange symbol carved into the wall.")
         print("It appears to be a circle with an X inside it, with crosses")
         print("at the end of each arm of the X.")
         result = True
      else:
         print("Stop talking nonsense.")
   matches = 5
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "pick up":
         print("Pick up what?")
      elif ans == "run" or ans == "r":
         print("You feel as if something is weighing you down..")
         print("You couldn't run if you tried.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "use bible" or ans == "u bible":
         print("Reading the Bible won't save you.")
      elif ans == "examine wall" or ans== "examine symbol" or ans == "x wall" or ans == "x symbol":
         print("The strange symbol seems to be etched into your mind")
         print("just as it is etched into the wall.")
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "look" or ans == "l":
         print("You take another step back, and you feel a soft crunch under your foot.")
         print("You lift your foot, underneath is what looks like a book of matches.")
      elif ans == "examine matches" or ans == "x matches":
         print("There are 4 matches in the crumbling paper matchbook.")
      elif ans == "pick up matches" or ans == "p matches":
         print("You pick up the matches.")
         print("")
         print("Added to inventory!")
         inventory.append("Matches")
         result = True
      else:
         print("Excuse me?")    
def ch3():
   print("")
   print("")
   print("A flicker of light..")
   print("")
   print("")
   print("And the church went dark.")
   pressenter = input()
   print(".......")
   print("")
   print("It's dark.")
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "run" or ans == "r":
         print("You'd only trip over your own feet in the dark.")
         print("Besides, the doors likely still won't open.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "use bible" or ans == "u bible":
         print("Reading the Bible won't save you.")
      elif ans == "look" or ans =="l":
         print("You can't look. It's dark.")
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "use match" or ans == "use matches" or ans == "u match" or ans == "u matches":
         print("You feel for the matchbook.")
         print("You strike the match, and it comes to life.")
         result = True
      else:
         print("I don't understand.")
   
   result = False
   ans = ""
   matches = 4
   matchlit = True
   while result == False and matches > 0:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "run" or ans == "r":
         print("You'd only trip over your own feet in the dark.")
         print("Besides, the doors likely still won't open.")
         print("...Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif ans == "use" or ans == "u":
         print("Use what?")
         print("...Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
         print("Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif ans == "examine" or ans == "x":
         print("Examine what?")
         print("...Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif ans == "use bible" or ans == "u bible":
         print("Reading the Bible won't save you.")
         print("The paper looks thin and flammable, however.")
         print("...Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
         print("...Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif matchlit == True and ans == "use match" or ans == "use matches" or ans == "u match" or ans == "u matches":
         print("You already have a match lit!")
      elif matchlit == False and ans == "use match" or ans == "u match":
         print("You light the match.")
         matchlit = True
      elif ans == "look" or ans == "l" and matchlit == True:
         print("You look, by the dim light of the match.")
         print("You can barely make out faint outlines.")
         print("...Your match burned out!")
         matches = matches - 1
         matchlit = False
      elif ans == "burn bible" or ans == "use match on bible":
         print("You take the match to the bible.")
         print("Beliefs aside, you need more light.")
         print("Paper burns fast. You'd better figure out what to do while you can.")
         inventory.remove("Bible")
         result = True
      elif ans != "use match"or ans != "u match" and matchlit == False:
         print("You can't do that. It's dark.")
      else:
         print("What?")
         print("...Your match burned out!")
         matches = matches -1
         matchlit = False
   if result != True:
      outofmatches()
      
def ch4():
   inventory.remove("Matches")
   numtries = 2
   result = False
   ans = ""
   while result == False and numtries > 0:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
         numtries = numtries - 1
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
         numtries = numtries - 1
      elif ans == "run" or ans == "r":
         print("In a last attempt at hope, you run at the door, hoping to break it.")
         print("The light illuminates the strange symbol on the wall.")
         print("It seems to be stamped into your mind..")
         print("Against your common sense, almost as if you are being pulled by")
         print("an unwanted force, you turn around and run towards the symbol")
         print("instead.")
         result = True
      elif ans == "use" or ans == "u":
         print("Use what?")
         numtries = numtries - 1
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
         numtries = numtries - 1
      elif ans == "examine" or ans == "x":
         print("Examine what?")
         numtries = numtries - 1
      elif ans == "look" or ans == "l":
         print("The Bible is burning, quickly, quickly!")
         numtries = numtries - 1
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
         numtries = numtries - 1
      else:
         print("You ridiculous utterances have no meaning to me.")
         numtries = numtries - 1
   if numtries == 0:
      burnedout()
   pressenter = input()
   print("You don't know what you're doing, there's nothing in your mind but")
   print("static and the symbol, burned into your memory even as you")
   print("shut your eyes...")
   print("")
   print("You expect to crash into the wall, you can't stop running, you brace")
   print("for the impact but..")
   pressenter = input()
   print("A wave of cold washes over you.")
   print("You stumble, and fall.")
   print("")
   print("As you get up, you see that the room you are in is dimly lit.")
   print("You're still in the church, but you must have..")
   print("fallen through..")
   print("the wall.")
   print("")
   print("In fact, as you turn and look behind you, you see that the symbol")
   print("on the wall is gone.")
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "run" or ans == "r":
         print("There's no need to run.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "look" or ans == "l":
         print("You look. The room is lit because of three candles.")
         print("The candles are on a small table in the corner.")
         result = True
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      else:
         print("Stop talking nonsense.")
def ch5():
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help"or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("There's no need to run.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "look" or ans == "l":
         print("You look. The room is lit because of three candles.")
         print("The candles are on a small table in the corner.")
      elif ans == "examine candles" or ans == "x candles":
         print("The candles are on a small table in the corner.")
         print("One is white, one is black, and one is red.")
      elif ans == "examine corner" or ans == "examine table" or ans == "x corner" or ans == "x table":
         print("You walk over to the table in the corner.")
         print("There is a black box under the table.")
      elif ans == "pick up box":
         print("It's too heavy to pick up.")
      elif ans == "pick up candle" or ans == "pick up candles" or ans == "p candle" or ans == "p candles":
         print("The candles already illuminate the small room just enough to")
         print("see by.")
         print("There's no reason to move them.")
      elif ans == "examine box" or ans == "examine black box" or ans == "x box" or "x black box":
         print("The box is locked.")
         print("It shouldn't be too hard to find a key in this small room.")
         result = True
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      else:
         print("What?")
   result = False
   ans = ""
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("There's no need to run.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "look" or ans == "l":
         print("You look around. You notice a shine of metal on the floor in the")
         print("other corner.")
      elif ans == "examine candles" or ans == "x candles":
         print("The candles are on a small table in the corner.")
         print("There's nothing special about them.")
      elif ans == "examine corner" or ans == "examine table" or ans == "x corner" or ans == "x table":
         print("You walk over to the table in the corner.")
         print("There is a black box under the table.")
      elif ans == "pick up box" or ans == "p box":
         print("It's too heavy to pick up.")
      elif ans == "pick up candle" or ans == "pick up candles" or ans == "p candle" or ans == "p candles":
         print("The candles already illuminate the small room just enough to")
         print("see by.")
         print("There's no reason to move them now.")
      elif ans == "examine box" or ans == "examine black box" or ans == "x box" or ans == "x black box":
         print("The box is locked.")
         print("It shouldn't be too hard to find a key in this small room.")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u razor blade" or ans == "u blade" or ans == "u razor":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "examine shine" or ans == "examine metal" or ans == "x shine" or ans == "x metal":
         print("You found a key! You're almost surprised that it was this easy.")
      elif ans == "examine key" or ans == "x key":
         print("Yep, looks like a key alright.")
      elif ans == "pick up key" or ans == "p key":
         print("Your fingers go right through it, and it dissapears.")
         print("You realize just how exhausted you are..")
         result = True
      else:
         print("Stop talking nonsense.")

   result = False
   ans = ""
   lookkey = 0
   candlesplaced = 0
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("You don't see a door.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "examine candle" or ans == "examine candles" or ans == "x candle" or ans == "x candles":
         print("The candles are on a small table in the corner.")
         print("There is one black, one red, and one white.")
      elif ans == "examine box" or ans == "examine black box" or ans == "x box" or ans == "x black box":
         print("The box is locked.")
         print("It shouldn't be too hard to find a key in this small room.")
      elif lookkey < 1 and (ans == "look" or ans == "l") and candlesplaced < 3:
         print("You look around. You notice the key has moved to")
         print("another place on the floor.")
         lookkey = 1
      elif lookkey == 1 and (ans == "look" or ans == "l") and candlesplaced < 3:
         print("You've begun to notice a pattern in the way the key moves.")
         print("The key moves to either one of four places,")
         print("as if there is an imaginary square in the middle of the room")
         print("and the key touching the corners.")
         print("Maybe if you placed something in the corners...")
      elif ans == "examine shine" or ans == "examine metal" or ans == "examine key" or ans == "x shine" or ans == "x metal" or ans == "x key":
         print("You found a key!")
      elif ans == "examine table" or ans == "x table":
         print("You walk over to the table in the corner.")
         print("There is a black box under the table.")
      elif (ans == "pick up key" or ans == "p key") and candlesplaced < 3:
         print("Your fingers go right through it, and it dissapears.")
         print("You realize just how exhausted you are..")
      elif ans == "pick up box" or ans == "p box":
         print("It's too heavy to pick up.")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "pick up candles" or ans == "p candles":
         print("You can only carry one at a time.")
      elif ans == "pick up candle" or ans == "p candle":
         print("Which candle?")
         print("There is one black, one red, one white.")
      elif ans == "pick up black candle" or ans == "p black candle":
         print("You pick up the candle.")
         print("")
         print("Added to inventory!")
         inventory.append("Black Candle")
      elif ans == "pick up red candle" or ans == "p red candle":
         print("You pick up the candle.")
         print("")
         print("Added to inventory!")
         inventory.append("Red Candle")
      elif ans == "pick up white candle" or ans == "p white candle":
         print("You pick up the candle.")
         print("")
         print("Added to inventory!")
         inventory.append("White Candle")
      elif ans == "use candle" or ans == "u candle":
         print("Which candle?")
      elif ans == "use white candle" or ans == "u white candle" and candlesplaced < 3:
         print("You place the white candle in a corner.")
         if "White Candle" in inventory:
            inventory.remove("White Candle")
         candlesplaced = candlesplaced + 1
      elif ans == "use black candle" or ans == "u black candle" and candlesplaced < 3:
         print("You place the black candle in a corner.")
         if "Black Candle" in inventory:
            inventory.remove("Black Candle")
         candlesplaced = candlesplaced + 1
      elif ans == "use red candle" or ans == "u red candle" and candlesplaced < 3:
         print("You place the red candle in a corner.")
         if "Red Candle" in inventory:
            inventory.remove("Red Candle")
         candlesplaced = candlesplaced + 1
      elif ans == "use black candle" or ans == "u black candle" and candlesplaced >= 3:
         print("You don't need to mess with the candles anymore.")
      elif ans == "use white candle" or ans == "u white candle" and candlesplaced >=3:
         print("You don't need to mess with the candles anymore.")
      elif ans == "use red candle" or ans == "u red candle" and candlesplaced >= 3:
         print("You don't need to mess with the candles anymore.")
      elif ans == "look" or ans == "l" and candlesplaced >=3:
         print("The key is staying in one place!")
      elif candlesplaced >= 3 and ans == "pick up key" or ans == "p key":
         print("You pick up the key..")
         print("And it's solid! A physical key.")
         print("")
         print("Added to inventory!")
         inventory.append("Key")
         result = True
      else:
         print("I cannot accept your nonsense ramblings.")
         
   result = False
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("There's no need to run.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "examine candle" or ans == "examine candles" or ans == "x candle" or ans == "x candles":
         print("The candles are on the floor.")
         print("Doesn't look like they're going to burn out anytime soon.")
      elif ans == "pick up candle" or ans == "pick up candles" or ans == "p candle" or ans == "p candles":
         print("There's no need to do that.")
      elif ans == "run" or ans == "r":
         print("You don't see a door.")
      elif (ans == "examine box" or ans == "examine black box") or (ans == "x box" or ans == " x black box"):
         print("The box is locked.")
         print("You have a key, don't you?")
      elif ans == "use match" or ans == "use matches" or ans == "u match" or ans == "u matches":
         print("There's no need to do that now.")
      elif ans == "look" or ans == "l":
         print("The candles are on the floor, and the box awaits in the corner.")
      elif ans == "pick up box" or ans == "p box":
         print("It's too heavy to pick up.")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif (ans == "use key" or ans == "use key on box") or (ans == "u key" or ans == "u key on box"):
         print("You unlock the box.")
         print("Inside, there are several things..")
         print("but on the top of it all is a black leather notebook.")
         print("It's a journal of some sort.")
         inventory.remove("Key")
         result = True
      else:
         print("What was that?")
def ch6():
   result = False
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("You don't see any doors.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "e":
         print("Examine what?")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "look" or ans == "l":
         print("There are several things in the box, on top of which is a black")
         print("leather notebook.")
      elif ans == "pick up box" or ans == "p box":
         print("It's too heavy to pick up.")
      elif ans == "examine notebook" or ans == "examine journal" or ans == "examine book" or ans == "x notebook" or ans == "x book" or ans == "x journal":
         print("It's thick, but only five pages seem to have been written in.")
      elif ans == "pick up journal" or ans == "pick up notebook" or ans == "pick up book" or ans == "p journal" or ans == "p notebook" or ans == "p book":
         print("You pick up the notebook.")
         print("Maybe this will help you find a way out of here...")
         print("")
         print("Added to Inventory!")
         inventory.append("Notebook")
         result = True
      else:
         print("Excuse me?")
   result = False
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("You don't see any doors.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "examine box" or ans == "examine black box" or ans == "x box" or ans == "x black box":
         print("There are several things in the box, but you're more interested")
         print("in the journal as of now.")
      elif ans == "look" or ans == "l":
         print("There's nothing much else to see.")
      elif ans == "pick up box" or ans == "p box":
         print("It's too heavy to pick up.")
      elif ans == "use journal" or ans == "use book" or ans == "use notebook" or ans == "u journal" or ans == "u book" or ans == "u notebook":
         print("You can flip to a specific page..")
         print("For example, use the command " + color.BOLD + "page1" + color.END)
         print("to flip to the first page.")
      elif ans == "page1":
         pg1()
      elif ans == "page2":
         pg2()
      elif ans == "page3":
         pg3()
      elif ans == "page4":
         pg4()
      elif ans == "page5":
         pg5()
         result = True
      else:
         print("I cannot accept that answer.")
   result = False
   pickedupnecklace = False
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("You don't see any doors.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "examine box" or ans == "examine black box" or ans == "x box" or ans == "x black box":
        print("There is a necklace with a sigil on the pendant,")
        print("a paper with the strange symbol from earlier drawn on it,")
        print("some chalk, and a black handled dagger.")
        print("There is also a small empty bottle marked 'Holy Water'.")
      elif ans == "examine necklace" or ans == "examine pendant" or ans == "x necklace" or ans == "x pendant":
         print("The sigil is engraved into the pendant, just as the book said to do.")
      elif ans == "examine chalk" or ans == "x chalk":
         print("White chalk, not in a box but rather wrapped in a black ribbon.")
      elif ans == "examine dagger" or ans == "examine black handled dagger" or ans == "x dagger" or ans == "x black handled dagger":
         print("It has a plain black handle and a very sharp point.")
      elif ans == "examine bottle" or ans == "examine holy water" or ans == "x bottle" or ans == "x holy water":
         print("It's empty. There's no use for this.")
      elif ans == "examine paper" or ans == "x paper":
         print("It has the same symbol on it you saw etched into the wall.")
         print("It must be the sigil...")
      elif ans == "pick up paper" or ans == "pick up dagger" or ans == "pick up holy water" or ans == "pick up knife" or ans == "pick up bottle" or ans == "pick up chalk" or ans == "p paper" or ans == "p dagger" or ans == "p holy water" or ans == "p knife" or ans == "p bottle" or ans == "p chalk":
         print("Your eyes are fixated on the necklace.")
         print("Maybe you should take that first?")
      elif ans == "pick up necklace" or ans == "pick up pendant" or ans == "p necklace" or ans == "p pendant":
         print("You pick up the necklace.")
         print("")
         print("Added to Inventory!")
         inventory.append("Necklace")
         pickedupnecklace = True
      elif (pickedupnecklace == True and ans == "use necklace") or (ans == "use pendant" or ans == "u necklace" or ans == "u pendant"):
         print("You put the necklace on...")
         print("You suddenly feel calmer.")
         print("Your hands stopped shaking..you didn't even realize they were")
         print("in the first place.")
         inventory.remove("Necklace")
         result = True
      elif ans == "look" or ans == "l":
         print("There's nothing much else to see.")
      elif ans == "pick up box" or ans == "p box":
         print("It's too heavy to pick up.")
      elif ans == "use journal" or ans == "use book" or ans == "use notebook" or ans == "u journal" or ans == "u book" or ans == "u notebook":
         print("You can flip to a specific page..")
         print("For example, use the command " + color.BOLD + "page1" + color.END)
         print("to flip to the first page.")
      elif ans == "page1":
         pg1()
      elif ans == "page2":
         pg2()
      elif ans == "page3":
         pg3()
      elif ans == "page4":
         pg4()
      elif ans == "page5":
         pg5()
      else:
         print("I cannot accept that answer.")
   result = False
   while result == False:
      ans = input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      ans = ans.lower()
      if ans == "help" or ans == "h":
         help_command()
      elif ans == "inventory" or ans == "i":
         inventory_command()
      elif ans == "run" or ans == "r":
         print("You don't see any doors.")
      elif ans == "use" or ans == "u":
         print("Use what?")
      elif ans == "pick up" or ans == "p":
         print("Pick up what?")
      elif ans == "examine" or ans == "x":
         print("Examine what?")
      elif ans == "use blade" or ans == "use razor" or ans == "use razor blade" or ans == "u blade" or ans == "u razor" or ans == "u razor blade":
         print("You shudder at the thought.")
         print("A voice echos in your head...")
         print("")
         print("It is not yet your time..")
      elif ans == "examine box" or ans == "examine black box" or ans == "x box" or ans == "x black box":
        print("There is a paper with the strange symbol from earlier drawn on it,")
        print("some chalk, and a black handled dagger.")
        print("There is also a small empty bottle marked 'Holy Water'.")
      elif ans == "examine chalk" or ans == "x chalk":
         print("White chalk, not in a box but rather wrapped in a black ribbon.")
      elif ans == "examine dagger" or ans == "examine black handled dagger" or ans == "x dagger" or ans == "x black handled dagger":
         print("It has a plain black handle and a very sharp point.")
      elif ans == "examine bottle" or ans == "examine holy water" or ans == "x bottle" or ans == "x holy water":
         print("It's empty. There's no use for this.")
      elif ans == "examine paper" or ans == "x paper":
         print("It has the same symbol on it you saw etched into the wall.")
         print("It must be the sigil...")
      elif ans == "pick up paper" or ans == "pick up dagger" or ans == "pick up holy water" or ans == "pick up knife" or ans == "pick up bottle" or ans == "p paper" or ans == "p dagger" or ans == "p holy water" or ans == "p bottle":
         print("The book said something about drawing a magic circle..")
         print("You'll need chalk for that.")
      elif ans == "pick up chalk" or ans == "p chalk":
         print("You pick up the chalk.")
         print("")
         print("Added to Inventory!")
      elif ans == "use chalk" or ans == "draw circle" or ans == "u chalk":
         print("You really don't want to meddle about with..spirits.")
         print("You don't even know what drawing the so-called 'magic circle'")
         print("would do, anyway.")
         print("But it seems you're trapped here, and you figure if something")
         print("goes wrong, it would probably be a quicker death than rotting")
         print("alone in this enclosed church room with no doors or windows.")
         print("....")
         pressenter = input()
         print("You begin to draw the nine-foot Circle, to the best of your ability.")
         result = True
      else:
         print("Your foolish answers mean nothing.")
def main():
   ch1()
   ch2()
   ch3()
   ch4()
   ch5()
   ch6()
   pressenter = input()
   print(color.RED + color.BOLD + "The End..for now" + color.END)

if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print(color.RED + color.BOLD + " You think you can escape?" + color.END)
        try:
            sys.exit(0)
        except SystemExit:
            os._exit(0)
            
#ideas and notes go here
"""the good ending is the pc waking up in the woods, with no church even there."""
""" the player has to summon a demon at some point..."""
"""which is what the chalk and razor blade are for."""
