#please ignore the spaghetti Dx
#and all the if statements
#oh god
#so many if statements
import os
import sys
from time import sleep
class color: #because colors :3
   PURPLE = '\033[95m'  
   CYAN = '\033[96m'    
   DARKCYAN = '\033[36m' 
   BLUE = '\033[94m'
   GREEN = '\033[92m'
   YELLOW = '\033[93m'
   RED = '\033[91m'
   BOLD = '\033[1m'
   UNDERLINE = '\033[4m'
   END = '\033[0m'
class bg:
   red = '\033[41m'
   lightgrey = '\033[47m'
   black = '\033[40m'
#and as the blood runs down the walls
#you see me creepin up these halls
#ive been a bad motherfucker
#tell your sister i'm another
#Go! Go! Go!

#....
#now what will I do with this list? It seems to have no use..
#..eh i'll keep it for later
items = ["razor blade", "crucifix", "teddy bear", "safety pins", "spray paint", "matches", "bible", "chalk", "candleholder"]
inventory = []
commands = ["look", "use", "examine", "inventory", "run", "pick up", "help"]
#i need more command functions, but I'm lazy x-x
def help_command():
   global commands
   print "Commands:"
   print ""
   print commands
def inventory_command():
   global inventory
   if inventory != []:
      print "Inventory:"
      print inventory
   if inventory == []:
      print "There's nothing there..."
def screenflicker():
   bigspace = """























                                       """
   for i in range (6):
      print bg.red + bigspace
      sleep(0.08)
      print bg.black + bigspace
      sleep(0.08)
def outofmatches():
   os.system('clear')
   print ""
   print "You have no more matches."
   print "You stumble around in the dark, feeling for a wall or a door."
   print "However, you feel nothing."
   print "All you feel is an icy cold grip, as your fingers turn numb.."
   pressenter = raw_input()
   screenflicker()
   print color.RED + color.BOLD + "BAD END" + color.END
   sys.exit()
def burnedout():
   os.system('clear')
   print ""
   print "The bible crumbles to ash and the flame dies."
   print "You are alone, in the dark."
   print "An earsplitting voice shrieks in your head-"
   print color.RED + color.BOLD + "WHY HAVE YOU FORSAKEN US?" + color.END
   print "You...I.."
   print "You begin to feel as though you are not alone in the church any longer."
   print "You can feel it. Getting closer, and closer, and..."
   print ""
   print color.RED + color.BOLD + "BAD END" + color.END
#and so we begin...
def ch1():
    os.system('clear')
    print "It's dark."
    pressenter = raw_input()
    print "You can type 'help'..."
    ans = ""
    while ans != "help":
       ans = raw_input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "help":
          #you only hear the music when your heart begins to
          break 
       if ans != "help":
          print "You didn't type 'help', did you?"
          print "Why do think you know what you're doing already?"
          print "Do as I say."
    help_command()
    print ""
    print "Be clear with what you want to say."
    print "Keep your commands free of punctuation, weird spellings, or any such things."
    print "You can specify your commands, such as 'pick up box',"
    print "But don't be too specific with it."
    print "For example, don't say 'pick up the small box in the corner over there.'"
    print "If you have any difficulties, try rewording your command."
    print "Or use a different command altogether."
    print ""
    print "Now you have at least some idea of what you're doing.."
    print "..."
    print "It's dark."
    ans = ""
    while ans not in commands:
       ans = raw_input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look":
          print "You look around. You seem to be in what appears to be a small, old church."
          print "It is empty except for some old pews and a dark shape in the corner."
          print "It stinks of rot."
       elif ans == "use":
          print "Use? Use what?"
          print "Exactly, you have nothing you can use."
       elif ans == "examine":
         print "Examine what?"
       elif ans == "inventory":
         inventory_command()
       elif ans == "run":
         print "There's no need to run."
       elif ans == "pick up":
          print "Pick up what?"
       elif ans == "help":
         help_command()
       else:
          print "What was that?"
    ans = ""
    result = False
    examinedcorner = False
    examinedpews = False
    while result == False:
       ans = raw_input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look":
          print "You look around. You seem to be in what appears to be an old church."
          print "It is empty except for some old pews and a dark shape in the corner."
          print "It stinks of rot."
       elif ans == "use":
          print "There's nothing you can use."
       elif ans == "examine":
          print "Examine what?"
       elif ans == "examine shape" or ans == "examine dark shape" or ans == "examine corner":
          print "You walk over to the shape in the corner and..."
          print "The stench of the rotting flesh instantly hits you."
          print "It's a dead deer, crawling with maggots, and it seems to have its throat slit."
          examinedcorner = True
       elif examinedcorner == True and ans == "examine deer" or ans == "examine dead deer":
         print "Now, why would you do that?" 
       elif ans == "inventory":
          inventory_command()
       elif ans == "help":
          help_command()
       elif ans == "examine pews" or ans == "examine pew":
          print "You examine the pews. The wood is cracked and stained."
          print "There's something wedged between the seats..."
          print "It's a bible, not out of place in a church."
          print "However, it appears to be shiny and new, in contrast to"
          print "the decay surrounding you."
          examinedpews = True
          result = True
       elif examinedcorner == False and ans == "run":
          print "There's no need to run."
       elif examinedcorner == True and ans == "run":
         print "You try running away, but you don't get very far."
         print "The door is locked and it won't budge."
       elif ans == "pick up":
          print "There's nothing to pick up."
       else:
         print "I'm not programmed to accept that answer."

    ans = ""
    result = False
    examinedbible = False
    while result == False:
       ans = raw_input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look":
          print "You look around. There's not much else to see."
          print "It's starting to get cold."
       elif examinedcorner == True and ans == "examine deer" or ans == "examine dead deer":
         print "Now, why would you do that?"
       elif ans == "use":
         print "There's nothing you can use."
       elif ans == "inventory":
         inventory_command()
       elif ans == "help":
         help_command()
       elif examinedcorner == True and ans == "run":
         print "You try running away, but you don't get very far."
         print "The door is locked and it won't budge."
       elif examinedcorner == False and ans == "examine shape" or ans == "examine dark shape" or ans == "examine corner":
          print "You walk over to the shape in the corner and..."
          print "The stench of the rotting flesh instantly hits you."
          print "It's a dead deer, crawling with maggots, and it seems to have its throat slit."
          examinedcorner = True
       elif ans == "pick up":
         print "Pick up what?"
       elif ans == "examine":
         print "Examine what?"
       elif ans == "examine bible" or ans == "examine the bible":
         print "You open the Bible. The pages are stained with blood."
         examinedbible = True
       elif examinedbible == True and ans == "pick up bible" or ans == "pick up the bible":
         print "You pick up the Bible. You wish it wasn't so bloody, though."
         print "Added to Inventory!"
         inventory.append("Bible")
         result = True
       elif examinedbible == False and ans == "pick up bible" or ans == "pick up the bible":
         print "Shouldn't you take a closer look before you go about taking things?"
       elif examinedcorner == False and ans == "run":
         print "There's no need to run."
       elif ans == "use bible":
          print "What would you even do with it?"
          print "You can't use that now."
       else:
         print "What was that?"
    result = False
    while result == False:
       ans = raw_input(color.PURPLE + ">>> " + color.END)
       ans = ans.lower()
       if ans == "look":
          print "You look around, again."
          print "Nothing seems to be any different."
       elif ans == "inventory":
          inventory_command()
       elif ans == "help":
          help_command()
       elif ans == "examine":
          print "There's nothing more to examine."
       elif ans == "use":
          print "Use what?"
       elif ans == "pick up":
          print "Pick up what?"
       elif ans == "pick up bible":
          print "You already have the Bible."
       elif ans == "use bible":
          print "What would you even do with it?"
          print "It's too dark to make out any words."
       elif ans == "run":
          print "You try to run. The old windows won't break,"
          print "no matter how hard you hit your pathetic fists against them."
          print "The door still won't budge, either."
          print "Frantically, you try again and again to escape, to no avail."
          print "You become aware of a prescence behind you as suddenly you"
          print "start to get dizzy..."
          pressenter = raw_input()
          result = True
       else:
          print "I don't understand."
def ch2():
   print ""
   print ""
   print ""
   print ""
   print "..."
   print "..."
   print color.RED + "...!!!!" + color.END
   print "You wake up."
   print "You weren't aware that you were ever unconscious in the first place."
   print "It's still dark, except you are aware of a faint, flickering light"
   print "coming from somewhere a little further away."
   result = False
   while result == False:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "look":
         #mass convulsions strike the choir
         #by the grace of god!
         #gun it while I'm holding on...
         print "You look around. The light's coming from what remains of"
         print "the altar."
      elif ans == "inventory":
         inventory_command()
      elif ans == "help":
         help_command()
      elif ans == "use":
          print "Use what?"
      elif ans == "pick up":
          print "Pick up what?"
      elif ans == "run":
         print "Do you really want to try that again?"
         print "Besides, you don't seem to have the energy to, anyway."
      elif ans == "examine":
         print "examine what?"
      elif ans == "examine light" or ans == "examine altar":
         print "You walk over to the light. It's a flickering white candle,"
         print "burned almost halfway through."
         print "It's just enough light to read by."
      elif ans == "use bible" or ans == "read bible":
         print "You open the Bible to a random page."
         print "Psalm 106:37-38..."
         print "'They sacrificed their sons and daughters to false gods."
         print "They shed innocent blood, the blood of their sons and daughters,"
         print "whom they sacrificed to the idols of Canaan, and the land was"
         print "desecrated by their blood.'"
         result = True
      elif ans == "pick up candle":
         print "You try to touch it, but it burns your fingers."
      elif ans == "examine shape" or ans == "examine corner":
         print "There's nothing there anymore, except for a dark stain and the"
         print "lingering smell of rot."
      else:
         print "Excuse me?"
   result = False
   ans = ""
   while result == False:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "look":
         print "You look around. The candle is slowly burning down..."
         print "Out of the corner of your eye, you notice a flash of silver"
         print "underneath the altar."
      elif ans == "help":
         help_command()
      elif ans == "inventory":
         inventory_command()
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "run":
         print "You feel as if something is weighing you down.."
         print "You couldn't run if you tried."
      elif ans == "use":
         print "Use what?"
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "pick up candle":
         print "You try, but the wax burns your fingers."
      elif ans == "examine":
         print "Examine what?"
      elif ans == "examine silver" or ans == "examine flash" or ans == "examine altar":
         print "You look underneath the altar..It's a shiny, fresh razor blade."
         print "You're unsure of how that even got there, but that's the least of your problems."
      elif ans == "examine blade" or ans == "examine razor blade":
         print "It's new. Shiny. And most surprisingly, there's no blood on it at all."
      elif ans == "pick up blade" or ans == "pick up razor blade":
         #the angels just cut out her tongue!
         print "You don't want to pick it up."
         print "It's disturbing that something like that's even here."
         print "If everything else wasn't disturbing enough, that is."
         print "Still, you were commanded to pick it up, and since you can't find a reason"
         print "*not* to pick it up, pathetic human, you do so anyway, against your"
         print "better judgement."
         print ""
         print "Added to inventory!"
         inventory.append("Razor Blade")
         result = True
      elif ans == "use bible":
         print "You don't know if you want to read any further."
         print "You feel like you should look around some more"
         print "while the candle is still burning."
      else:
         print "Your foolish answers make no sense."
   result = False
   ans = ""
   while result == False:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      #we've only got one chance to put this at an end
      #and cross the patron saint of switchblade fights!
      if ans == "help":
         help_command()
      elif ans == "inventory":
         inventory_command()
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "run":
         print "You feel as if something is weighing you down.."
         print "You couldn't run if you tried."
      elif ans == "use":
         print "Use what?"
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "pick up candle":
         print "You try, but the wax burns your fingers."
      elif ans == "examine":
         print "Examine what?"
      elif ans == "examine altar":
         print "There's nothing else there."
      elif ans == "look":
         print "By the dying candlelight, you slowly take a few steps."
         print "Your fingers brush against the rough walls.."
         print "You feel unexpected ridges and grooves, as if someone"
         print "had carved something there."
      elif ans == "use bible":
         print "Reading the Bible won't save you."
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade":
         print "You shudder at the thought."
         print "A voice echos in your head..."
         print ""
         print "It is not yet your time.."
      elif ans == "examine wall":
         print "You take a step back. You can make out a crude etching of a"
         print "strange symbol carved into the wall."
         print "It appears to be a circle with an X inside it, with crosses"
         print "at the end of each arm of the X."
         result = True
      else:
         print "Stop talking nonsense."
   matches = 5
   result = False
   ans = ""
   while result == False:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help":
         help_command()
      elif ans == "inventory":
         inventory_command()
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "run":
         print "You feel as if something is weighing you down.."
         print "You couldn't run if you tried."
      elif ans == "use":
         print "Use what?"
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "examine":
         print "Examine what?"
      elif ans == "use bible":
         print "Reading the Bible won't save you."
      elif ans == "examine wall":
         print "The strange symbol seems to be etched into your mind"
         print "just as it is etched into the wall."
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade":
         print "You shudder at the thought."
         print "A voice echos in your head..."
         print ""
         print "It is not yet your time.."
      elif ans == "look":
         print "You take another step back, and you feel a soft crunch under your foot."
         print "You lift your foot, underneath is what looks like a book of matches."
      elif ans == "examine matches":
         print "There are 4 matches in the crumbling paper matchbook."
      elif ans == "pick up matches":
         print "You pick up the matches."
         print ""
         print "Added to inventory!"
         inventory.append("Matches")
         result = True
      else:
         print "Excuse me?"    
def ch3():
   print ""
   print ""
   print "A flicker of light.."
   print ""
   print ""
   print "And the church went dark."
   pressenter = raw_input()
   print "......."
   print ""
   print "It's dark."
   result = False
   ans = ""
   while result == False:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help":
         help_command()
      elif ans == "inventory":
         inventory_command()
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "run":
         print "You'd only trip over your own feet in the dark."
         print "Besides, the doors likely still won't open."
      elif ans == "use":
         print "Use what?"
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "examine":
         print "Examine what?"
      elif ans == "use bible":
         print "Reading the Bible won't save you."
      elif ans == "look":
         print "You can't look. It's dark."
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade":
         print "You shudder at the thought."
         print "A voice echos in your head..."
         print ""
         print "It is not yet your time.."
      elif ans == "use match" or ans == "use matches":
         print "You feel for the matchbook."
         print "You strike the match, and it comes to life."
         result = True
      else:
         print "I don't understand."
   #well i think i'm gonna burn in hell!
   #everybody burn the house right down!
   result = False
   ans = ""
   matches = 4
   matchlit = True
   while result == False and matches > 0:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help":
         help_command()
      elif ans == "inventory":
         inventory_command()
      elif ans == "pick up":
         print "Pick up what?"
      elif ans == "run":
         print "You'd only trip over your own feet in the dark."
         print "Besides, the doors likely still won't open."
         print "...Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif ans == "use":
         print "Use what?"
         print "...Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif ans == "pick up":
         print "Pick up what?"
         print "Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif ans == "examine":
         print "Examine what?"
         print "...Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif ans == "use bible":
         print "Reading the Bible won't save you."
         print "The paper looks thin and flammable, however."
         print "...Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade":
         print "You shudder at the thought."
         print "A voice echos in your head..."
         print ""
         print "It is not yet your time.."
         print "...Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif matchlit == True and ans == "use match" or ans == "use matches":
         print "You already have a match lit!"
      elif matchlit == False and ans == "use match":
         print "You light the match."
         matchlit = True
      elif ans == "look" and matchlit == True:
         print "You look, by the faint light of the match."
         print "You can barely make out faint outlines."
         print "...Your match burned out!"
         matches = matches - 1
         matchlit = False
      elif ans == "burn bible" or ans == "use match on bible":
         print "You take the match to the bible."
         print "Beliefs aside, you need more light."
         print "Paper burns fast. You'd better figure out what to do while you can."
         inventory.remove("Bible")
         result = True
      elif ans != "use match" and matchlit == False:
         print "You can't do that. It's dark."
      else:
         print "What?"
         print "...Your match burned out!"
         matches = matches -1
         matchlit = False
   if result != True:
      outofmatches()
def ch4():
   #cuz mostly i've been sprawled
   #on these cathedral steps
   #while spitting out the blood and screaming
   #'someone save us!'
   inventory.remove("Matches")
   numtries = 2
   result = False
   ans = ""
   while result == False and numtries > 0:
      ans = raw_input(color.PURPLE + ">>> " + color.END)
      ans = ans.lower()
      if ans == "help":
         help_command()
      elif ans == "inventory":
         inventory_command()
         numtries = numtries - 1
      elif ans == "pick up":
         print "Pick up what?"
         numtries = numtries - 1
      elif ans == "run":
         print "In a last attempt at hope, you run at the door, hoping to break it."
         print "The light illuminates the strange symbol on the wall."
         print "It seems to be stamped into your mind.."
         print "Against your common sense, almost as if you are being pulled by"
         print "an unwanted force, you turn around and run towards the symbol"
         print "instead."
         result = True
      elif ans == "use":
         print "Use what?"
         numtries = numtries - 1
      elif ans == "pick up":
         print "Pick up what?"
         numtries = numtries - 1
      elif ans == "examine":
         print "Examine what?"
         numtries = numtries - 1
      elif ans == "look":
         print "The Bible is burning, quickly, quickly!"
         numtries = numtries - 1
      elif ans == "use razor blade" or ans == "use razor" or ans == "use blade":
         print "You shudder at the thought."
         print "A voice echos in your head..."
         print ""
         print "It is not yet your time.."
         numtries = numtries - 1
      else:
         print "You ridiculous utterances have no meaning to me."
         numtries = numtries - 1
   if numtries == 0:
      burnedout()
def main():
   ch1()
   ch2()
   ch3()
   ch4()
   pressenter = raw_input()
   print color.RED + color.BOLD + "The End..for now" + color.END

if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print color.RED + color.BOLD + " You think you can escape?" + color.END
        try:
            sys.exit(0)
        except SystemExit:
            os._exit(0)
#ideas and notes go here
"""the good ending is the pc waking up in the woods, with no church even there."""
""" the player has to summon a demon at some point..."""
"""which is what the chalk and razor blade are for."""
"""bad ending #3- player kills themselves with the blade"""
