import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class MonkAndPrisonerOfAzkaban {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        String[] elem = br.readLine().split("\\s");

        Stack<Integer> xs = new Stack<>();

        xs.push(0);

        long[] x = new long[elem.length+1];
        for(int i=1; i< n;i++){
            int ai= Integer.parseInt(elem[i]);
            while(xs.size()>0 && Integer.parseInt(elem[xs.peek()])< ai){
                x[xs.peek()] = i+1;
                xs.pop();
            }
            xs.push(i);
        }

        while (xs.size()>0){
            x[xs.peek()]=-1;
            xs.pop();
        }

        xs.push(n-1);
        long[] y = new long[elem.length+1];
        for(int i=n-2; i>=0; i--){
            int ai= Integer.parseInt(elem[i]);
            while(xs.size()>0 && Integer.parseInt(elem[xs.peek()])< ai){
                y[xs.peek()] = i+1;
                xs.pop();
            }
            xs.push(i);
        }
        while (xs.size()>0){
            y[xs.peek()]=-1;
            xs.pop();
        }


        for(int i=0;i<n;i++){
            System.out.print(y[i]+x[i]+" ");
        }
    }
    }
