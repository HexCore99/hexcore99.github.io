import { defineConfig } from 'vitepress';

export default defineConfig({
  //title: 'Loop Examples',
  // themeConfig: {
  //   nav: [
  //     { text: 'Home', link: '/' },
  //     { text: '01', link: '/01' },
  //     { text: '02', link: '/02' },
  //     // Add all other links
  //     { text: '20', link: '/20' }
  //   ]
  // },
title: 'Siabul Hassan Siyam',
description:  "Solve Bank",
  themeConfig: {
    sidebar: [

      {
        text: 'SPL SOLVE',
        items: [
          {
            text: 'PROBLEM SET',
            collapsed: true,
            items: [
              { text: 'Loop', link: '/loops/singleLoop' },
              { text: 'Nested Loop', link: '/nestedLoop/nestedLoop' },
              { text: '1D Array', link: '/1DArray/1DArray' },
              { text: '2D Array', link: '/2DArray/2DArray' },
              { text: 'Strings', link: '/Strings/Strings' },
              { text: 'Function', link: '/Functions/functions' },
              { text: 'Pointers', link: '/Pointers/pointers' },
              { text: 'Structure', link: '/Structures/structures' },
              { text: 'Recursion', link: '/Recursion/recursion' },
            ]
          }, // 1st ITEM   END
          
          //If ANy item need to add. inside **********SPL SOLVE********** ADD HERE
          {

          },
            
          
            //2nd ITEM
            {
              text: 'MID SOLVE',
              collapsed: true,
              items: [
                { text: 'Spring 22', link: '/MidSolve/spring_22/spring_22' },
                { text: 'Summer 22', link: '/MidSolve/summer_22/summer_22' },
                { text: 'Fall 22', link: '/MidSolve/fall_22/fall_22' },
                { text: 'Fall 23', link: '/MidSolve/fall_23/fall_23' },
                { text: 'Spring 23', link: '/MidSolve/spring_23/spring_23' },
                { text: 'Spring 24', link: '/MidSolve/spring_24/spring_24' },
              ]
            }, //5th Item End

             //3rd ITEM
            {
              text: 'FINAL SOLVE',
              collapsed: true,
              items: [
                { text: 'Fall 23', link: '/FinalSolve/Fall23/fall23F' },
                { text: 'Spring 23', link: '/FinalSolve/Summer23/summer23F' },
                { text: 'Spring 24', link: '/FinalSolve/Spring24/spring24F' },
              ]
            }, //3rd  Item End

    // if anything need  to add under the SPL SOLVE section, add here, 
            //4th ITEM
            {
              



            },// 4th ITEM END

        ] // Root Items Items END
      },  // ROOT ITEM END

      // *************************************** New SECTION FOR  OOP *************************************************

{
  text: 'OOP',
  
  items: [
    
    {
      text: "Random Question Solve",
      collapsed: true,
      items:[
        {text: "Random", link: '/OOP/randomProblem'},
      ]
    },
    

    // MID SECTION
    {

      text: "MID SOLVE",
      collapsed: true,
      items:[

      ]
    }, // MID SECTION END

    // FINAL SECTION
    {
      text: "FINAL SOLVE",
      collapsed: true,
      items:[

      ]
    }, // FINAL SECTION END
    
    {
      // Append other section with **********************OOP****************
    }
    
  ]
}// OOP SECTION END --------------------





    ] // Side Bar END 
  },

  markdown: {
    lineNumbers: true
  },

  head: [
    ['link', { rel: 'stylesheet', href: '/style.css' }]
  ]
});
