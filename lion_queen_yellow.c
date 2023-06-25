#include<stdio.h>
#include<string.h>

//Max length of string
#define MAX_STR_LEN 100

int main() {
    char strName[MAX_STR_LEN];
    char strGoal[MAX_STR_LEN];
    char strEmphasizedProgram[MAX_STR_LEN];
    char strOutcome[MAX_STR_LEN];
    float fBudget = 0.0;
    int nPartnership = 0;
    int nVolunteers = 0;

    //Prompt user to enter the program name
    printf("Enter the name of your program: ");
    scanf("%[^\n]s", strName);

    //Prompt user to enter the goal of the program
    printf("\nEnter the goal of the program: ");
    scanf("%[^\n]s", strGoal);

    //Prompt user to enter an emphasized program
    printf("\nEnter an emphasized program of the program: ");
    scanf("%[^\n]s", strEmphasizedProgram);

    //Prompt user to enter the outcome of the program
    printf("\nEnter the outcome of the program: ");
    scanf("%[^\n]s", strOutcome);

    //Prompt user to enter the budget allocated to the program
    printf("\nEnter the budget allocated to the program: ");
    scanf("%f", &fBudget);

    //Prompt user to enter the number of partnership the program has
    printf("\nEnter the number of partnerships the program has: ");
    scanf("%d", &nPartnership);

    //Prompt user to enter the number of volunteers
    printf("\nEnter the number of volunteers: ");
    scanf("%d", &nVolunteers);

    //Process to calculate the number of resources the program can mobilize
    int nResourcesMobilized = nPartnership + nVolunteers;

    //Print the summary of the program stats
    printf("\nProgram Summary\n\n");
    printf("Name: %s\nGoal: %s\nEmphasized Program: %s\nOutcome: %s\nBudget: %f\nPartnerships: %d\nVolunteers: %d\nResources Mobilized: %d\n", strName, strGoal, strEmphasizedProgram, strOutcome, fBudget, nPartnership, nVolunteers, nResourcesMobilized);

    /*
    Functions for Community Outreach and Empowerment Programs
    */

    //Function to create awareness about the program
    void createAwareness(); 
    {
        //Print awareness message 
        printf("Creating awareness about the %s Program\n", strName);
    }

    //Function to motivate the partners and volunteers of the program
    void motivatePartnersVolunteers(); 
    {
        //Print motivation message
        printf("Motivating the partners and volunteers of the %s Program\n", strName);
    }

    //Function to update the partners and volunteers about the program
    void updatePartnersVolunteers(); 
    {
        //Print update message
        printf("Updating the partners and volunteers about the %s Program\n", strName);
    }

    //Function to create opportunities for the partners and volunteers
    void createOpportunities();
    {
        //Print opportunity message
        printf("Creating opportunities for the partners and volunteers of the %s Program\n", strName);
    }

    //Function to evaluate and measure the success of the program
    void evaluateSuccess();
    {
        //Print success message
        printf("Evaluating and measuring the success of the %s Program\n", strName);
    }

    //Function to build and sustain relationships
    void buildRelationships();
    {
        //Print relationship message
        printf("Building and sustaining relationships for the %s Program\n", strName);
    }

    //Function to engage with the stakeholders
    void engageStakeholders();
    {
        //Print stakeholder message
        printf("Engaging with the stakeholders of the %s Program\n", strName);
    }

    //Function to find new partners and volunteers
    void findPartnersVolunteers();
    {
        //Print partner and volunteer message
        printf("Finding new partners and volunteers for the %s Program\n", strName);
    }

    //Function to provide necessary support
    void provideSupport();
    {
        //Print support message
        printf("Providing necessary support for the partners and volunteers of the %s Program\n", strName);
    }

    //Function to assess the impact of the program
    void assessImpact();
    {
        //Print impact message
        printf("Assessing the impact of the %s Program\n", strName);
    }

    //Function to review and update the program
    void reviewUpdateProgram();
    {
        //Print review and update message
        printf("Reviewing and updating the %s Program\n", strName);
    }

    //Function to monitor and track progress
    void monitorProgress();
    {
        //Print monitor and track message
        printf("Monitoring and tracking progress of the %s Program\n", strName);
    }

    //Function to promote the program to the public
    void promoteProgram();
    {
        //Print promotion message
        printf("Promoting the %s Program to the public\n", strName);
    }

    //Function to document the program
    void documentProgram();
    {
        //Print documentation message
        printf("Documenting the %s Program\n", strName);
    }

    //Function to build capacity of the program
    void buildCapacity();
    {
        //Print capacity message
        printf("Building capacity for the %s Program\n", strName);
    }

    //Function to develop and facilitate meetings
    void developFacilitateMeetings();
    {
        //Print development and facilitation message
        printf("Developing and facilitating meetings for the %s Program\n", strName);
    }

    //Function to mobilize resources
    void mobilizeResources();
    {
        //Print resource mobilization message
        printf("Mobilizing resources for the %s Program\n", strName);
    }

    //Function to create a budget for the program
    void createBudget();
    {
        //Print budget creation message
        printf("Creating a budget for the %s Program\n", strName);
    }

    //Function to plan events for the program
    void planEvents();
    {
        //Print event planning message
        printf("Planning events for the %s Program\n", strName);
    }

    //Function to create networking opportunities
    void createNetworkingOpportunities();
    {
        //Print networking message
        printf("Creating networking opportunities for the %s Program\n", strName);
    }

    //Return 0 as success
    return 0;
}