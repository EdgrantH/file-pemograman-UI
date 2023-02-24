#include <stdio.h>
#include <ctype.h>

int main()
{
	
   char questions[][999] = {"1. Apa yang bisa kita lakukan untuk mencegah perubahan iklim?",
                            "2. Manakah salah satu tujuan dari SDG 13: CLIMATE ACTION  yang benar dibawah ini?",
                            "3. Apa saja dampak yang disebabkan oleh perubahan iklim?",
							"4. Manakah dari berikut ini yang merupakan gas rumah kaca?",
		                    };
                            
   char options[][999] = {"A. Membuang sampah ke sungai", 
   						  "B. Melakukan illegal logging", 
						  "C. Menggunakan transportasi umum", 
						  "D. Membakar sampah plastik",
						  
                          "A. Meminimalkan dan mengatasi dampak pengasaman laut, termasuk melalui peningkatan kerja sama ilmiah di semua tingkatan", 
						  "B. Memperkuat ketahanan dan kapasitas adaptasi terhadap bahaya terkait iklim dan bencana alam di semua negara", 
						  "C. Mengambil tindakan yang mendesak dan signifikan untuk mengurangi degradasi habitat alami, menghentikan hilangnya keanekaragaman hayati dan, pada tahun 2020, melindungi dan mencegah kepunahan spesies yang terancam punah", 
						  "D. Mengembangkan kelembagaan yang efektif, akuntabel, dan transparan di semua tingkatan",
						  
                          "A. Bertambahnya populasi orang di berbagai negara", 
						  "B. Kualitas udara yang semakin baik", 
						  "C. Semakin sedikit terjadinya bencana alam", 
						  "D. Naiknya permukaan laut yang disebabkan oleh mencairnya gletser dan lapisan es",
						  
						  "A. CO2",
						  "B. CH4",
						  "C. Uap air",
						  "D. A, B, dan C benar"};
                          
   char kunciJawaban[] = {'C', 'B', 'D', 'D'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

   char jawaban;
   int score;

   printf("QUIZ GAME\n");    

   int i,j;
   for(i = 0; i < numberOfQuestions; i++)
   {
      printf("\n");
      printf("%s\n", questions[i]);
      printf("\n");

      for(j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", options[j]);
      }

      printf("\nJawaban: ");
      scanf("%c", &jawaban);
      scanf("%c"); //clear \n from input buffer


      if(jawaban == kunciJawaban[i])
      {
         printf("Jawaban anda benar!\n");
         score++;
      }
      else
      {
         printf("Jawaban anda salah!\n");
      }
   }
   printf("*********************\n");
   printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
   printf("*********************\n");
 
   return 0;
}
