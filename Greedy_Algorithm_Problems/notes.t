what is difference between server side rendering (SSR), client side rendering (CSR), Static Site Generation (SSG).
    Where are the three different rendering strategies for UI rendering. Important to pick acc to business needs & requirement as it affect performance and UI.

   " SSR -> Server Side Rendering" :
            when user request a page, the server assembles the data, generate HTML, attach the styles. return the fully fully built webpage to the browser. THE JS needed for interactivity is then attached on the cleint side - this is called hydration.
            * Grete SEO & user sees content sooner
            * USer can't interact with the page immediately as hydration takes time'
            * Best for Blogs, news pages, e-commerce, - anything that frequently changes data that needs good seo.

    "CSR -> Client Side Rendring ": 
            when a user request a page, the server return blank html file with refereces to JS & CSS files.Once those file loads, JS run the browser, builds the page, & css get applied.
            * Highly interactive once loaded
            * Poor seo as the page is empty until JS runds. slow intial loading.
            * Best for dashboard, SaaS apps, anything behind login where seo does not matter.

    "SSG -> Static Site Generation ":
            When a user request a page. the server responds a pre-build HTML file generated at built time. No computation needed on the server or client side. 
            * fastest rendering strategy
            * Greatest SEO.
            * Not suitable for dynamic or frequently changing content.
            * Best for portfolios, documentation, landing pages, content that rarely changes. 

"One Line Summary":
    SSR -> built on server, per request.
    CSR -> built on browser, after load.
    SSG -> built at deploy time, served instantly.


Everytime solving new problem: 
    'Ask this important question to yourself regularly: '
        1. What can the operation NOT change? -> eg: relative order fixed
        2. What does a valid final state HAVE to look like? -> eg: x,x+1,…,x+k−1
        3. If I fix the final state, what is the minimum cost? -> ∑distance moved
        4. Does this resemble a problem I already know? -> min​∑∣ai​−x∣
        5. Can I transform that cost into a known mathematical optimization?