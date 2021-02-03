import java.util.Stack; 

public class Main
{
    static String ConvertPostfixToinfix(String exp) 
    { 
        String result = new String(""); 
          
        Stack<String> stack = new Stack<>(); 
          
        for (int i = 0; i<exp.length(); i++) 
        { 
            char c = exp.charAt(i); 
            if (Character.isLetterOrDigit(c)) 
            {
                stack.push(Character.toString(c));
            }
            else{
                String top= stack.pop();
                result= Character.toString(c)+ top + ")";
                top= stack.pop();
                result = "(" + top + result;
                stack.push(result);
            }
            
        }
        return result; 
    } 
    public static void main(String[] args)  
    { 
        String exp = "abc*ef-/+"; 
        System.out.println(ConvertPostfixToinfix(exp)); 
    } 
}
//import java.util.Stack; 

public class Main
{
    static String ConvertPostfixToinfix(String exp) 
    { 
        String result = new String(""); 
          
        Stack<String> stack = new Stack<>(); 
          
        for (int i = 0; i<exp.length(); i++) 
        { 
            char c = exp.charAt(i); 
            if (Character.isLetterOrDigit(c)) 
            {
                stack.push(Character.toString(c));
            }
            else{
                String top= stack.pop();
                result= Character.toString(c)+ top + ")";
                top= stack.pop();
                result = "(" + top + result;
                stack.push(result);
            }
            
        }
        return result; 
    } 
    public static void main(String[] args)  
    { 
        String exp = "abc*ef-/+"; 
        System.out.println(ConvertPostfixToinfix(exp)); 
    } 
}
//(a+((b*c)/(e-f)))


