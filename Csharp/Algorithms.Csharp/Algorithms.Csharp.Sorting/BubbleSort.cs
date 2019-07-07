using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algorithms.Csharp.Sorting
{
    public static class BubbleSort
    {
        public static void Sort(int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = 0; j < arr.Length - 1; j++)
                {
                    if (arr[j] > arr[j+1])
                    {
                    Swap(ref arr[j], ref arr[j+1]);

                    }
                }

            }
        }


        private static void Swap(ref int x, ref int y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

    }
}
