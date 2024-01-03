import java.util.*;

public class truthordare{
    public static void main(String[] args) {
        
        //creating Scanner and Random class
        Scanner sc = new Scanner(System.in);
        Random random = new Random();

        //following arrays store truth and dare questions
        String[] truthQuestions = {
            "Have you ever lied to your best friend?",
            "What is your biggest fear?",
            "What is the most embarrassing thing that has happened to you?",
            "What's your most bizarre nickname?",
            "What's been your most physically painful experience?",
            "What bridges are you glad that you burned?",
            "What's the craziest thing you've done on public transportation?",
            "If you met a genie, what would your three wishes be?",
            "What's the meanest thing you've ever said about someone else?",
            "What app do you waste the most time on?",
            "Have you ever regifted a present?",
            "When's the last time you made someone else cry?",
            "If you could become invisible, what's the worst thing you'd do?",
            "Who in this room would you list as your emergency contact?",
            "What's something you would die if your mom found out about?",
            "Have you ever cheated on a test or exam?",
            "What is your most embarrassing childhood memory?",
            "Have you ever stolen something?",
            "what is the biggest lie you've ever told your parents?",
            "Have you ever eavesdropped on someone's conversation?",
            "What is the most trouble you've ever gotten into at school?",
            "Have you ever had a crush on a friend's partner?",
            "What is the most childish thing you still do as an adult?",
            "Have you ever pretended to like a gift when you actually didn't?",
            "What is the most ridiculous rumor you've spread or believed?",
            
        };

        String[] dareChallenges = {
            "Sing a song in front of everyone.",
            "Do 10 push-ups right now.",
            "Call your crush and confess your feelings.",
            "Let another person post an Instagram caption on your behalf.",
            "Hand over your phone to another player who can send a single text saying anything they want to anyone they want.",
            "Let the other players go through your phone for one minute.",
            "Do an impression of another player until someone can figure out who it is.",
            "Describe the most attractive quality of every person in the room.",
            "Allow the person to your right to draw on your face with a Sharpie.",
            "Let everyone go through your Snapchat history.",
            "Read aloud the most personal text you have sent in recent days.",
            "Reveal your screen time report to your friends.",
            "Sing the national anthem in a British accent.",
            "Dump out your purse, backpack, or pockets and do a show and tell of what's inside.",
            "Do a dance routine in front of everyone.",
            "Give a piggyback ride to someone for one minute.",
            "Speak in a foreign accent for the next 10 minutes.",
            "Take a selfie with a stranger.",
            "Eat a spoonful of a spicy condiment (if you can handle it).",
            "Let another player style your hair in any way they want.",
            "Do a handstand or attempt a cartwheel.",
            "Perform a magic trick or a simple card trick.",
            "Sing a song using only animal sounds.",
            "Do a funny impersonation of a celebrity.",
        
        };

        boolean exit = false;
        
        //using while loop
        while(!exit){

        System.out.println("Truth or Dare?");
        System.out.println("Enter T for truth, D for dare or E for exit: ");

        String choice = sc.nextLine().toUpperCase();
        //to convert lower case to upper case

        
        if (choice.equals("T")) {
            //selecting a random truth question
            int index = random.nextInt(truthQuestions.length);
            String truthQuestion = truthQuestions[index];
            System.out.println("Truth: " + truthQuestion);
        } 
        else if (choice.equals("D")) {
            //selecting a random dare challenge
            int index = random.nextInt(dareChallenges.length);
            String dareChallenge = dareChallenges[index];
            System.out.println("Dare: " + dareChallenge);
        } 
        else if (choice.equals("E")) {
            //if user wants to exit the game
            System.out.println("Exiting the game. Goodbye!");
            System.out.println("See you next time.");
        } 
        else {
            //if user inputs any wrong input
            System.out.println("Invalid choice. Please try again.");
        }
        System.out.println();
        }


        sc.close();
    }

}