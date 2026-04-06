import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); //수의 개수
        int M = sc.nextInt(); //합을 구해야 하는 횟수

        //합 배열 미리 구하기
        int sumArr[] = new int[N+1];
        for (int i = 1; i <= N; i++) {
            sumArr[i] = sumArr[i-1] + sc.nextInt();
        }

        //구간 합 구하기
        int start =0, end=0;
        for (int i = 0; i < M; i++) {
            start = sc.nextInt();
            end = sc.nextInt();
            System.out.println(sumArr[end] - sumArr[start-1]);
        }
    }
}