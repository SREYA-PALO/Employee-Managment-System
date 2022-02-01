#include <stdio.h>
#include <string.h>


struct employee{
  int id;
  float salary;
  char name[20];
}emp[2];

void DisplayStruct(int index){

  for (int i=0; i<=(index-1); i++){
    printf("\nEmployee id is %d\n",emp[i].id);
    printf("Employee salary is %f\n",emp[i].salary);
    printf("Employee name is %s\n",emp[i].name);
  }

}

void EnterEmp(int index){

  for (int i=0; i<=(index-1); i++){
    printf("\n---Enter Details of %d Employee---\n",i);
    printf("\nEnter Employee id : ");
    scanf("%d",&emp[i].id);
    printf("\nEnter Employee salary : ");
    scanf("%f",&emp[i].salary);
    printf("\nEnter Employee name : ");
    scanf("%s",emp[i].name);
  }


}

int Enter_New_Employees(int index, int extra){
  int end;
  end = index + extra;
  for (int i=index; i<=(end-1); i++){
    printf("\n---Enter Details of %d Employee---\n",i);
    printf("\nEnter Employee id : ");
    scanf("%d",&emp[i].id);
    printf("\nEnter Employee salary : ");
    scanf("%f",&emp[i].salary);
    printf("\nEnter Employee name : ");
    scanf("%s",emp[i].name);
  }
  return end;
}

void Search_emp_by_id(int x, int index){
  int k = 0;
  for (int i=0; i<=(index-1); i++){
    if (x == emp[i].id){
      printf("Employee by id %d is %s\n",x,emp[i].name);
    }
    k++;
  }
  if (k == (index-1))
    printf("\nEmployee Not Found !!\n");
}


int main(){
  int index = 0;
  int y;
  int extra;
  printf("\n SELECT ANY ONE FROM FOLLOWING: \n");
  printf("1. ENTER EMPLOYEE\n");
  printf("2. DISPLAY EMPLOYEE\n");
  printf("3. NO.OF EMPLOYEES\n");
  printf("4. SEARCH FOR EMPLOYEE BY ID\n");
  printf("5. ENTER NEW EMPLOYEE DATA\n");
  printf("6. QUIT \n");

    jump :
    printf("\nEnter Choice : ");
    scanf("%d",&y);

    switch (y) {
      case 1 :
        printf("Enter Number of Employees : ");
        scanf("%d",&index);


        printf("\nEnter Employees Data : \n");
        EnterEmp(index);
        printf("\n\n\nEMPLOYEE DETAILS SUCCESSFULLY SAVED\n");
        goto jump;

      case 2 :
        printf("\nKindly contact the admin as its highly \nconfidential\nThank you");
        
        DisplayStruct(index);
        
        goto jump;


      case 3 :
        printf("\n------COUNTING--------\n");
        printf("\nNumber of Employees are %d\n",index);
        goto jump;


      case 4 :
        printf("\n---Search Employee by ID-----\n");
        int x;
        printf("Enter ID : ");
        scanf("%d",&x);
        Search_emp_by_id(x,index);
        printf("\n\n\nSorry the Employee with such Id doesn't exist");
        goto jump;

      case 5 :
        printf("\n---New Employee Entry---\n");
        printf("\nEnter Number of New Employees : ");
        scanf("%d",&extra);
        index = Enter_New_Employees(index,extra);
        printf("\n\n\nEmployee successfully added to list");
        goto jump;


      case 6 :
        break;

      default :
        printf("\n⚠️⚠️Enter Valid Choice⚠️⚠️\n");
        goto jump;

  }
  return 0;
}
