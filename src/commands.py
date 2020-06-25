from time import sleep
import os

class color: 
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

inventory = []
commands = ["look", "use", "examine", "inventory", "run", "pick up", "help"]

def pg1():
   print("-------------Page 1-------------")
   print("")
   print("..")
   print("This page details the making of the lamens and seals which are")
   print("necessary for a conjuration, as well as the creation of the magic")
   print("circle, as well as the Triangle.")
   print("It all looks very intricate.")
   print("'The Circle is meant to be nine feet in diameter, made with blessed or")
   print("consecrated chalk...'")
def pg2():
   print("-------------Page 2-------------")
   print("This page details the Evocation...")
   print("It's very lengthly.")
   print("You would have to " + color.BOLD + "read the evocation..." + color.END)
   print("..and offer a drop of blood.")
def pg3():
   print("-------------Page 3-------------")
   print("This page gives the Curse which the summoner shall place upon the Spirits...")
   print("given that they do not appear or depart when commanded to do so.")
   print("You would have to" + color.BOLD + " burn the spirit's sigil" + color.END)
   print("and" + color.BOLD + " use the black handled knife." + color.END)
def pg4():
    print("-------------Page 4-------------")
    print("This page gives the license to depart.")
    print("It tells the Spirits that they can leave, essentially.")
    print("You would have to " + color.BOLD + "read the license.." + color.END)
def pg5():
   print("-------------Page 5-------------")
   print("Oh god. Oh god. I messed up. I won't be able to-  I forgot....")
   print("I'm slowly going mad. Not even the Bible can save me now.")
   print("I leave my things, may they rot forever in this unholy....")
   print("...")
   print("The rest of the page is smeared with dried blood.")
   print("This is the last page that has writing on it.")
   print("All the rest of the pages are blank.")
def help_command():
   global commands
   print("Commands:")
   print("")
   print(commands)
def inventory_command():
   global inventory
   if inventory != []:
      print("Inventory:")
      print(inventory)
   if inventory == []:
      print("There's nothing there...")
def screenflicker():
   bigspace = """























                                       """
   for i in range (6):
      print(bg.red + bigspace)
      sleep(0.08)
      print(bg.black + bigspace)
      sleep(0.08)
def outofmatches():
   os.system('clear')
   print("")
   print("You have no more matches.")
   print("You stumble around in the dark, feeling for a wall or a door.")
   print("However, you feel nothing.")
   print("All you feel is an icy cold grip, as your fingers turn numb..")
   pressenter = input()
   screenflicker()
   print(color.RED + color.BOLD + "BAD END" + color.END)
   sys.exit()
def burnedout():
   os.system('clear')
   print("")
   print("The bible crumbles to ash and the flame dies.")
   print("You are alone, in the dark.")
   print("An earsplitting voice shrieks in your head-")
   print(color.RED + color.BOLD + "WHY HAVE YOU FORSAKEN US?" + color.END)
   print("You...I..")
   print("You begin to feel as though you are not alone in the church any longer.")
   print("You can feel it. Getting closer, and closer, and...")
   print("")
   print(color.RED + color.BOLD + "BAD END" + color.END)
