using System;

public class ChessBoard
{
	public int rows
	{
		get;
		set;
	}

	public int cols
	{
		get;
		set;
	}

	public char[, ] arr;
	public void createArray(int x, int y)
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				this.arr[i, j] = '-';
			}
		}
	}

	public void placeQueen(int row, int col)
	{
		this.arr[row, col] = 'Q';
	}

	public void removeQueen(int row, int col)
	{
		this.arr[row, col] = '-';
	}

	public bool isValidMove(int rows, int cols)
	{
		return true;
	}

	public bool solveNQueens(int rows, int cols)
	{
		if (cols == this.cols)
		{
			ShowBoard();
			return true;
		}
		else
		{
			for (int i = 0; i < this.rows; i++)
			{
				if (isValidMove(i, cols))
				{
					placeQueen(rows, cols);
					bool finished = solveNQueens(i, cols + 1);
					if(finished)
						return true;
					removeQueen(rows, cols);
				}
			}
		}

		return false;
	}

	public ChessBoard()
	{
		this.rows = 8;
		this.cols = 8;
		this.arr = new char[rows, cols];
		createArray(this.rows, this.cols);
	}
	public ChessBoard(int x, int y)
	{
		this.rows = x;
		this.cols = y;
		this.arr = new char[this.rows, this.cols];
		createArray(this.rows, this.cols);
	}
	public void ShowBoard()
	{
	for (int i = 0; i < this.rows; i++)
		{
			for (int j = 0; j < this.cols; j++)
			{
				Console.Write(this.arr[i, j] + "  ");
			}

			Console.Write("\n");
		}
	}
}

public class Program
{
	public static void Main()
	{
		ChessBoard cb = new ChessBoard();
		bool f = cb.solveNQueens(cb.rows,cb.cols);
		if(!f)
    {
      Consloe.WriteLine("No feasible solution possible");
    }
	}
}





