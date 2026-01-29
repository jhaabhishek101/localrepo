marks1=int(input("Enter Marks 1:")) #input liye
marks2=int(input("Enter Marks 2:"))
marks3=int(input("Enter Marks 3:"))

Total=(marks1+marks2+marks3)/3 #formula like

if(Total>=40 and marks1>=33 and marks2>=33 and marks3>=33): #logic bataye
    print("You are passed")
    
else:
    print("you are failed")