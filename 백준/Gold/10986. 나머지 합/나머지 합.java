import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); //N개의 수
        int M = sc.nextInt(); //M으로 나누어 떨어지는 수

        long S[] = new long[N]; //합 배열
        S[0] = sc.nextInt();
        for (int i = 1; i < N; i++) {
            S[i] = S[i-1] + sc.nextInt();
        }

        long C[] = new long[M]; //나머지 배열
        int remainder = 0;
        long answer = 0;
        for (int i = 0; i < N; i++) {
            remainder = (int) (S[i] % M); //인덱스로 쓸 거라 int로 캐스팅
            if(remainder == 0) { //구간 합의 나머지가 0일 때
                answer++;
            }
            C[remainder]++; //나머지가 같은 인덱스 개수 카운팅하기
        }
        for (int i = 0; i < M; i++) {
            if(C[i] > 1) { //나머지가 같은 게 최소 2개 이상 있음
                answer = answer + (C[i] * (C[i]-1) / 2);
            }
        }
        System.out.println(answer);
    }
}