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
title: 'heXcore',
description:  "Solve Bank",


  head: [
    [
      'script',
      {
        async: true,
        src: 'https://www.googletagmanager.com/gtag/js?id=G-YRC742KRB8',
      },
    ],
    [
      'script',
      {},
      "window.dataLayer = window.dataLayer || [];\nfunction gtag(){dataLayer.push(arguments);}\ngtag('js', new Date());\ngtag('config', 'G-YRC742KRB8');",
    ],
  ],

  themeConfig: {

    sidebar: [

      {
        text: 'SPL SOLVE',
        items: [
          {
            text: 'PROBLEM SET',
            collapsed: true,
            items: [
              { text: 'Loop', link: '/SPL/loops/singleLoop' },
              { text: 'Nested Loop', link: '/SPL/nestedLoop/nestedLoop' },
              { text: '1D Array', link: '/SPL/1DArray/1DArray' },
              { text: '2D Array', link: '/SPL/2DArray/2DArray' },
              { text: 'Strings', link: '/SPL/Strings/Strings' },
              { text: 'Function', link: '/SPL/Functions/functions' },
              { text: 'Pointers', link: '/SPL/Pointers/pointers' },
              { text: 'Structure', link: '/SPL/Structures/structures' },
              { text: 'Recursion', link: '/SPL/Recursion/recursion' },
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
                { text: 'Spring 22', link: '/SPL/MidSolve/spring_22/spring_22' },
                { text: 'Summer 22', link: '/SPL/MidSolve/summer_22/summer_22' },
                { text: 'Fall 22', link: '/SPL/MidSolve/fall_22/fall_22' },
                { text: 'Fall 23', link: '/SPL/MidSolve/fall_23/fall_23' },
                { text: 'Spring 23', link: '/SPL/MidSolve/spring_23/spring_23' },
                { text: 'Spring 24', link: '/SPL/MidSolve/spring_24/spring_24' },
              ]
            }, //5th Item End

             //3rd ITEM
            {
              text: 'FINAL SOLVE',
              collapsed: true,
              items: [
                { text: 'Fall 23', link: '/SPL/FinalSolve/Fall23/fall23F' },
                { text: 'Spring 23', link: '/SPL/FinalSolve/Summer23/summer23F' },
                { text: 'Spring 24', link: '/SPL/FinalSolve/Spring24/sprng24F.md' },
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

    // OOP MID SECTION
    {

      text: "MID SOLVE",
      collapsed: true,
      items:[
      { text: 'SPRING 24', link: '/OOP/MidSolve/Spring24.md' },
      { text: 'FALL 23', link: '/OOP/MidSolve/Fall23.md' },
      { text: 'SUMMER 23', link: '/OOP/MidSolve/Summer23.md' },
      { text: 'FALL 22', link: '/OOP/MidSolve/Fall22.md' },
      { text: 'Spring 23', link: '/OOP/MidSolve/Spring23.md' },
      { text: 'Summer 24', link: '/OOP/MidSolve/Summer24.md' },


      ]
    }, // OOP MID SECTION END

    // OOP FINAL SECTION
    {
      text: "FINAL SOLVE",
      collapsed: true,
      items:[
        { text: 'FALL23', link: '/OOP/FinalSolve/Fall23.md' },
      ]
    }, // OOP FINAL SECTION END
        

    {
      text: "Random Question Solve",
      collapsed: true,
      items:[
        {text: "Random", link: '/OOP/randomProblem'},
      ]
    },

    {
      // Append other section with **********************OOP****************
    }
    
  ]
},// OOP SECTION END --------------------

// TOC SECTION
{
text: 'TOC',
items:[

{
  items:[
    {text: "CFG", link: '/TOC/CFG/CFG.md' },
  { text:"CFG TO CNF", link: '/TOC/CFG_TO_CNF/CFG_TO_CNF_UPDATED.md' },
  ]
  
}

]
},
//DSA Section
{
  text: 'DSA',
  items: [
    {
      text: "Problem Solve",
      collapsed: true,
      items : [
       {  text: "Sorting", link: '/DSA/Problem_Solve/Sorting.md' },
       {  text: "Searching", link: '/DSA/Problem_Solve/Searching.md' },
      ]
    }
  ]
}

    ] // Side Bar END 
  },

  markdown: {
    lineNumbers: true,
    math:true
  },

  // head: [
  //   ['link', { rel: 'stylesheet', href: 'style.css',
  //     integrity: 'sha384-n8MVd4RsNIU0tAv4ct0nTaAbDJwPJzDEaqSD1odI+WdtXRGWt2kTvGFasHpSy3SV',
  //     crossorigin: 'anonymous'
  //    }],

  // ]

});
