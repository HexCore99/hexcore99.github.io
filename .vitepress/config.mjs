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


  themeConfig: {
    sidebar: [
      {
        text: 'SPL',
        items: [
          {
            text:'Problems',
            collapsed: true,
            items:[
              {text:'Loop', link:'/loops/singleLoop'},
              {text:'Nested Loop', link:'/nestedLoop/nestedLoop'},
              {text:'1D Array', link:'/1DArray/1DArray'},
              {text:'2D Array', link:'/2DArray/2DArray'},
              {text:'Strings', link:'/Strings/Strings'},
              {text:'Function', link:'/Functions/functions'},
              {text:'Pointers', link:'/Pointers/pointers'},
              {text:'Structure', link:'/Structures/structures'},
              {text:'Recursion', link:'/Recursion/recursion'},
            ],
            
          },
          {
            text: 'Mid Solve',
            collapsed: true,
            items:[
              {text:'Fall 22', link:'/MidSolve/fall_22/fall_22'},
              {text:'Fall 23', link:'/MidSolve/fall_23/fall_23'},
              {text:'Spring 22', link:'/MidSolve/spring_22/spring_22'},
              {text:'Spring 23', link:'/MidSolve/spring_23/spring_23'},
              {text:'Summer 22', link:'/MidSolve/summer_22/summer_22'},
              {text:'Spring 24', link:'/MidSolve/spring_24/spring_24'},
            ]
          }
      
        ],
        
      }
    ]
  },


  markdown: {
    lineNumbers: true
  },
 
  head: [
    ['link', { rel: 'stylesheet', href: '/style.css' }]
  ]
});