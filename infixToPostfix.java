import java.util.Stack; 

public class Main
{
static int checkPrecedence(char ch) 
    {
        if(ch=='+'||ch=='-')
            return 1;
        else if (ch=='*' || ch=='/')
            return 2;
        else if(ch=='^')
            return 3;
        else 
            return -1;
    } 
    static String ConvertinfixToPostfix(String exp) 
    { 
        String result = new String(""); 
          
        Stack<Character> stack = new Stack<>(); 
          
        for (int i = 0; i<exp.length(); i++) 
        { 
            char c = exp.charAt(i); 
            if (Character.isLetterOrDigit(c)) 
                result += c; 
            else if (c == '(') 
                stack.push(c); 
            else if (c == ')') 
            { 
                while (!stack.isEmpty() &&  
                        stack.peek() != '(') 
                    result += stack.pop(); 
                  
                    stack.pop(); 
            } 
            else
            { 
                while (!stack.isEmpty() && checkPrecedence(c) <= checkPrecedence(stack.peek())){ 
                    result += stack.pop(); 
             } 
                stack.push(c); 
            } 
       
        } 
        while (!stack.isEmpty()){ 
            if(stack.peek() == '(') 
                return "Invalid Expression"; 
            result += stack.pop(); 
         } 
        return result; 
    } 
    public static void main(String[] args)  
    { 
        String exp = "a+b*c/(e-f)"; 
        System.out.println(ConvertinfixToPostfix(exp)); 
    } 
}

