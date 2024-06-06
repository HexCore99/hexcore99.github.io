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