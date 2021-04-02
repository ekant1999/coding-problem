using System;

public class ChessBoard
{
	public int N
	{
		get;
		set;
	}
	public char[, ] arr;
	public ChessBoard()
	{
		this.N=8;
		this.arr = new char[N, N];
		createArray(N);
	}

	public ChessBoard(int n)
	{
		this.N=n;
		this.arr = new char[n,n];
		createArray(this.N);
	}
	
	public void createArray(int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				this.arr[i, j] = '-';
			}
		}
	}
	public bool isValidMove(int row, int col)
	{
		int i, j;
		for (i = 0; i < col; i++)
		{
			if (this.arr[row, i] == 'Q')
				return false;
		}

		for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		{
			if (this.arr[i, j] == 'Q')
				return false;
		}

		for (i = row, j = col; j >= 0 && i < this.N; i++, j--)
		{
			if (this.arr[i, j] == 'Q')
				return false;
		}

		return true;
	}

	public bool solveNQueens(int cols)
	{
		if (cols >= this.N)
		{
			ShowBoard();
			return true;
		}
			for (int i = 0; i < this.N; i++)
			{
				if (isValidMove(i, cols))
				{
					this.arr[i,cols]='Q';
					bool finished = solveNQueens(cols + 1);
					if (finished)
						return true;
					this.arr[i,cols]='-';
				}
			}
		return false;
	}


	public void ShowBoard()
	{
		for (int i = 0; i < this.N; i++)
		{
			for (int j = 0; j < this.N; j++)
			{
				Console.Write(this.arr[i, j] + "  ");
			}
			Console.Write("\n");
			Console.Write("\n");
		}
	}
}

public class Program
{
	public static void Main()
	{
		ChessBoard cb = new ChessBoard(5);
		bool f = cb.solveNQueens(0);
	}
}
