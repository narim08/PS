import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); //N*N 표의 크기
        int M = sc.nextInt(); //합을 구해야 하는 횟수

        int A[][] = new int[N+1][N+1];
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                A[i][j] = sc.nextInt();
            }
        }
        int D[][] = new int[N+1][N+1];
        //구간 합 구하기
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                D[i][j] = D[i][j-1] + D[i-1][j] - D[i-1][j-1] + A[i][j];
            }
        }

        int x1=0, x2=0, y1=0, y2=0, result=0;
        for (int i = 0; i < M; i++) {
            x1 = sc.nextInt();
            y1 = sc.nextInt();
            x2 = sc.nextInt();
            y2 = sc.nextInt();
            //구간 합 배열을 이용하여 질의에 답변하기
            result = D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1];
            System.out.println(result);
        }
    }
}