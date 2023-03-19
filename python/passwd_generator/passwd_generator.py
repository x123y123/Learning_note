import random 
import string  # To call the letters

lowercase = list(string.ascii_lowercase)
uppercase = list(string.ascii_uppercase)
symbols = ['!', '@', '$', '%', '&', '(', ')', '^', '+', '-', '*']
digits = list(string.digits)

all_elements = lowercase + uppercase + symbols + digits

print("This is Passwd generator!")
lenof_pwd = int(input("Enter the number of the passwd lenght you want:\n"))

passwd_out = []

#passwd_out = random.choices(all_elements, k = lenof_pwd)
for i in range(lenof_pwd):
    passwd_out += random.choice(all_elements)

# random sort the pass_out by random.shuffle()
random.shuffle(passwd_out)

# remove brackets and comma
out = ''.join(str(i) for i in passwd_out)
print("Passward: {}".format(out))


