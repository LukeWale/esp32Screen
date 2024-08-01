#include <TFT_eSPI.h>
#include <SPI.h>

// Create an instance of the TFT_eSPI library
TFT_eSPI tft = TFT_eSPI(); // Invoke custom library

void setup(void) {
  // Initialize the display
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(1.5);
}

void loop() {
  // Words to display

  const char* words[] = { "Now,", "this", "is", "a", "story", "all", "about", "how", "My", "life", "got", "flipped-turned", "upside", "down", "And", "I'd", "like", "to", "take", "a", "minute", "Just", "sit", "right", "there", "I'll", "tell", "you", "how", "I", "became", "the", "prince", "of", "a", "town", "called", "Bel-Air", "In", "West", "Philadelphia", "born", "and", "raised", "On", "the", "playground", "was", "where", "I", "spent", "most", "of", "my", "days", "Chillin'", "out,", "maxin',", "relaxin',", "all", "cool", "And", "all", "shootin'", "some", "b-ball", "outside", "of", "the", "school", "When", "a", "couple", "of", "guys", "who", "were", "up", "to", "no", "good", "Started", "making", "trouble", "in", "my", "neighborhood", "I", "got", "in", "one", "little", "fight", "and", "my", "mom", "got", "scared", "She", "said,", "\"You're", "movin'", "with", "your", "auntie", "and", "uncle", "in", "Bel-Air", "I", "begged", "and", "pleaded", "with", "her", "day", "after", "day", "But", "she", "packed", "my", "suitcase", "and", "sent", "me", "on", "my", "way", "She", "gave", "me", "a", "kiss", "and", "then", "she", "gave", "me", "my", "ticket", "I", "put", "my", "Walkman", "on", "and", "said,", "\"I", "might", "as", "well", "kick", "it", "First", "class,", "yo", "this", "is", "bad", "Drinking", "orange", "juice", "out", "of", "a", "champagne", "glass", "Is", "this", "what", "the", "people", "of", "Bel-Air", "living", "like?", "Hmm,", "this", "might", "be", "alright", "But", "wait,", "I", "hear", "they're", "prissy,", "bourgeois,", "all", "that", "Is", "this", "the", "type", "of", "place", "that", "they", "just", "send", "this", "cool", "cat?", "I", "don't", "think", "so", "I'll", "see", "when", "I", "get", "there", "I", "hope", "they're", "prepared", "for", "the", "prince", "of", "Bel-Air", "Well,", "the", "plane", "landed", "and", "when", "I", "came", "out", "There", "was", "a", "dude", "who", "looked", "like", "a", "cop", "standing", "there", "with", "my", "name", "out", "I", "ain't", "trying", "to", "get", "arrested", "yet,", "I", "just", "got", "here", "I", "sprang", "with", "the", "quickness", "like", "lightning,", "disappeared", "I", "whistled", "for", "a", "cab", "and", "when", "it", "came", "near", "The", "license", "plate", "said,", "\"Fresh\"", "and", "it", "had", "dice", "in", "the", "mirror", "If", "anything", "I", "could", "say", "that", "this", "cab", "was", "rare", "But", "I", "thought", "\"Nah,", "forget", "it,", "yo,", "holmes", "to", "Bel", "Air", "I", "pulled", "up", "to", "the", "house", "about", "seven", "or", "eight", "And", "I", "yelled", "to", "the", "cabbie,", "\"Yo", "holmes,", "smell", "ya", "later", "I", "looked", "at", "my", "kingdom", "I", "was", "finally", "there", "To", "sit", "on", "my", "throne", "as", "the", "prince", "of", "Bel-Air" };

  int numWords = sizeof(words) / sizeof(words[0]);
  
  for (int i = 0; i < numWords; i++) {
    // Clear the screen
    tft.fillScreen(TFT_BLACK);
    
    // Calculate the width and height of the word
    int16_t x1, y1;
    uint16_t w, h;
    tft.setTextDatum(MC_DATUM);  // Middle center
    tft.drawString(words[i], tft.width() / 2, tft.height() / 2, 4);

    // Delay before showing the next word
    delay(500);
  }
}