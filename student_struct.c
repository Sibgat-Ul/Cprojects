#include <stdio.h>
#include <stdlib.h>

typedef struct Student_Data {
    char name[80];
    int id;
    float gpa;
} stData;

int main () {
    int i, n;

    FILE *db;
    db = fopen("student_db.txt", "wb");

    if (db == NULL) {
      fprintf(stderr, "\nError opening student_db.txt\n\n");
      exit (1);
    }

    printf("Enter value for n: ");
    scanf("%d", &n);

    stData sc[n], sc2[n];

    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &sc[i].id);
        printf("Name: ");
        scanf(" %[^\n]%*c", sc[i].name);
        printf("Gpa: ");
        scanf("%f", &sc[i].gpa);
    }

    if (!fwrite) fprintf(stderr, "\nError writting\n");
    else fwrite (sc, sizeof(sc), 1, db);

    fclose(db);

    db = fopen("student_db.txt", "rb");
    fread(sc2, sizeof(sc2), 1, db);

    printf("\n\nOutput to student_db.txt: \n");

    for(i = 0; i < n; i++)
        printf ("\nID: %d \nName: %s \nGPA: %.2f\n", sc2[i].id, sc2[i].name, sc2[i].gpa);

    fclose(db);
    //printf("\nname: %s\nID: %d \nGPA: %.2f",  sc[0].name, sc[0].id, sc[0].gpa);

    return 0;
}
