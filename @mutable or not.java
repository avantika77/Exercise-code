    public class ImmutableStrings   // class which serves as the entry point of the program.
    {  
      
    // main method  
    public static void main(String argvs[])   
    {  
    String str1 = "hello";  //str1 is declared and initialized with the value "hello".
    // assigning the reference of string str1 to string str2   
    String str2 = str1;   //str2 is declared and assigned the reference of str1
    str1 = str1 + "Gulzar";  //hello gulzar
      
    if(str1 == str2)  
    {  
    System.out.println("Strings are not immutable.");  
    }  
    else  
    {  
    // if the control reaches here, then it means == operator   
    // has returned a false value.  
    System.out.println("Strings are immutable.");      
    }  
          
      
    }  
    }  

===========================================================================================================================================================
🔸Immutability refers to the property of an object whose state cannot be modified after it is created. In the context of programming,
    immutability typically applies to data types such as strings, numbers, and collections (e.g., lists, sets, maps).
🔸In languages like Java, strings are immutable, meaning once a string object is created, its value cannot be changed.
🔸Any operation that appears to modify a string actually creates a new string object with the modified value, leaving the original string unchanged
============================================================================================================================================================
Output:
Strings are immutable.
