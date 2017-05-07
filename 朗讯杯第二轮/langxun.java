package langxun;

import java.io.*;
import java.util.Scanner;

public class langxun{
	int readBoard(int MAP[][]){
		File file = new File("board.txt");
		if(!file.exists())
			return -1;

		Scanner scanner;
		try {
			scanner = new Scanner(file);
			for(int i=1; i<=19; i++)
				for(int j=1; j<=19; j++)
					MAP[i][j] = scanner.nextInt();
			scanner.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		return 0;
	}

	int readStep(int x[], int y[]){
		int len = 0;
		File file = new File("steps.txt");
		if(!file.exists())
			return -1;
		Scanner scanner;
		try {
			scanner = new Scanner(file);
			while(scanner.hasNext()){
				x[len] = scanner.nextInt();
				y[len] = scanner.nextInt();
				len++;
			}
			scanner.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		return len;
	}

	void outputAnswer(int x,int y){
	    System.out.println(x+" "+y);
	}
}
