<!DOCTYPE html>
<html lang="en-US">
  <head>
    <meta charset="UTF-8" />
    <title>grEGG Meme Maker &#8211;$grEGG</title>
    <meta name="robots" content="max-image-preview:large" />
    <link
      rel="alternate"
      type="application/rss+xml"
      title="$michi &raquo; Feed"
      href="https://michisolana.org/feed/"
    />
    <link
      rel="alternate"
      type="application/rss+xml"
      title="$michi &raquo; Comments Feed"
      href="https://michisolana.org/comments/feed/"
    />
    <script>
      window._wpemojiSettings = {
        baseUrl: "https:\/\/s.w.org\/images\/core\/emoji\/15.0.3\/72x72\/",
        ext: ".png",
        svgUrl: "https:\/\/s.w.org\/images\/core\/emoji\/15.0.3\/svg\/",
        svgExt: ".svg",
        source: {
          concatemoji:
            "https:\/\/michisolana.org\/wp-includes\/js\/wp-emoji-release.min.js?ver=6.5.3",
        },
      };
      /*! This file is auto-generated */
      !(function (i, n) {
        var o, s, e;
        function c(e) {
          try {
            var t = {
              supportTests: e,
              timestamp: new Date().valueOf(),
            };
            sessionStorage.setItem(o, JSON.stringify(t));
          } catch (e) {}
        }
        function p(e, t, n) {
          e.clearRect(0, 0, e.canvas.width, e.canvas.height),
            e.fillText(t, 0, 0);
          var t = new Uint32Array(
              e.getImageData(0, 0, e.canvas.width, e.canvas.height).data
            ),
            r =
              (e.clearRect(0, 0, e.canvas.width, e.canvas.height),
              e.fillText(n, 0, 0),
              new Uint32Array(
                e.getImageData(0, 0, e.canvas.width, e.canvas.height).data
              ));
          return t.every(function (e, t) {
            return e === r[t];
          });
        }
        function u(e, t, n) {
          switch (t) {
            case "flag":
              return n(
                e,
                "\ud83c\udff3\ufe0f\u200d\u26a7\ufe0f",
                "\ud83c\udff3\ufe0f\u200b\u26a7\ufe0f"
              )
                ? !1
                : !n(
                    e,
                    "\ud83c\uddfa\ud83c\uddf3",
                    "\ud83c\uddfa\u200b\ud83c\uddf3"
                  ) &&
                    !n(
                      e,
                      "\ud83c\udff4\udb40\udc67\udb40\udc62\udb40\udc65\udb40\udc6e\udb40\udc67\udb40\udc7f",
                      "\ud83c\udff4\u200b\udb40\udc67\u200b\udb40\udc62\u200b\udb40\udc65\u200b\udb40\udc6e\u200b\udb40\udc67\u200b\udb40\udc7f"
                    );
            case "emoji":
              return !n(
                e,
                "\ud83d\udc26\u200d\u2b1b",
                "\ud83d\udc26\u200b\u2b1b"
              );
          }
          return !1;
        }
        function f(e, t, n) {
          var r =
              "undefined" != typeof WorkerGlobalScope &&
              self instanceof WorkerGlobalScope
                ? new OffscreenCanvas(300, 150)
                : i.createElement("canvas"),
            a = r.getContext("2d", {
              willReadFrequently: !0,
            }),
            o = ((a.textBaseline = "top"), (a.font = "600 32px Arial"), {});
          return (
            e.forEach(function (e) {
              o[e] = t(a, e, n);
            }),
            o
          );
        }
        function t(e) {
          var t = i.createElement("script");
          (t.src = e), (t.defer = !0), i.head.appendChild(t);
        }
        "undefined" != typeof Promise &&
          ((o = "wpEmojiSettingsSupports"),
          (s = ["flag", "emoji"]),
          (n.supports = {
            everything: !0,
            everythingExceptFlag: !0,
          }),
          (e = new Promise(function (e) {
            i.addEventListener("DOMContentLoaded", e, {
              once: !0,
            });
          })),
          new Promise(function (t) {
            var n = (function () {
              try {
                var e = JSON.parse(sessionStorage.getItem(o));
                if (
                  "object" == typeof e &&
                  "number" == typeof e.timestamp &&
                  new Date().valueOf() < e.timestamp + 604800 &&
                  "object" == typeof e.supportTests
                )
                  return e.supportTests;
              } catch (e) {}
              return null;
            })();
            if (!n) {
              if (
                "undefined" != typeof Worker &&
                "undefined" != typeof OffscreenCanvas &&
                "undefined" != typeof URL &&
                URL.createObjectURL &&
                "undefined" != typeof Blob
              )
                try {
                  var e =
                      "postMessage(" +
                      f.toString() +
                      "(" +
                      [JSON.stringify(s), u.toString(), p.toString()].join(
                        ","
                      ) +
                      "));",
                    r = new Blob([e], {
                      type: "text/javascript",
                    }),
                    a = new Worker(URL.createObjectURL(r), {
                      name: "wpTestEmojiSupports",
                    });
                  return void (a.onmessage = function (e) {
                    c((n = e.data)), a.terminate(), t(n);
                  });
                } catch (e) {}
              c((n = f(s, u, p)));
            }
            t(n);
          })
            .then(function (e) {
              for (var t in e)
                (n.supports[t] = e[t]),
                  (n.supports.everything =
                    n.supports.everything && n.supports[t]),
                  "flag" !== t &&
                    (n.supports.everythingExceptFlag =
                      n.supports.everythingExceptFlag && n.supports[t]);
              (n.supports.everythingExceptFlag =
                n.supports.everythingExceptFlag && !n.supports.flag),
                (n.DOMReady = !1),
                (n.readyCallback = function () {
                  n.DOMReady = !0;
                });
            })
            .then(function () {
              return e;
            })
            .then(function () {
              var e;
              n.supports.everything ||
                (n.readyCallback(),
                (e = n.source || {}).concatemoji
                  ? t(e.concatemoji)
                  : e.wpemoji && e.twemoji && (t(e.twemoji), t(e.wpemoji)));
            }));
      })((window, document), window._wpemojiSettings);
    </script>
    <style id="wp-emoji-styles-inline-css">
      img.wp-smiley,
      img.emoji {
        display: inline !important;
        border: none !important;
        box-shadow: none !important;
        height: 1em !important;
        width: 1em !important;
        margin: 0 0.07em !important;
        vertical-align: -0.1em !important;
        background: none !important;
        padding: 0 !important;
      }
    </style>
    <style id="classic-theme-styles-inline-css">
      /*! This file is auto-generated */
      .wp-block-button__link {
        color: #fff;
        background-color: #32373c;
        border-radius: 9999px;
        box-shadow: none;
        text-decoration: none;
        padding: calc(0.667em + 2px) calc(1.333em + 2px);
        font-size: 1.125em;
      }

      .wp-block-file__button {
        background: #32373c;
        color: #fff;
        text-decoration: none;
      }
    </style>
    <style id="global-styles-inline-css">
      body {
        --wp--preset--color--black: #000000;
        --wp--preset--color--cyan-bluish-gray: #abb8c3;
        --wp--preset--color--white: #ffffff;
        --wp--preset--color--pale-pink: #f78da7;
        --wp--preset--color--vivid-red: #cf2e2e;
        --wp--preset--color--luminous-vivid-orange: #ff6900;
        --wp--preset--color--luminous-vivid-amber: #fcb900;
        --wp--preset--color--light-green-cyan: #7bdcb5;
        --wp--preset--color--vivid-green-cyan: #00d084;
        --wp--preset--color--pale-cyan-blue: #8ed1fc;
        --wp--preset--color--vivid-cyan-blue: #0693e3;
        --wp--preset--color--vivid-purple: #9b51e0;
        --wp--preset--gradient--vivid-cyan-blue-to-vivid-purple: linear-gradient(
          135deg,
          rgba(6, 147, 227, 1) 0%,
          rgb(155, 81, 224) 100%
        );
        --wp--preset--gradient--light-green-cyan-to-vivid-green-cyan: linear-gradient(
          135deg,
          rgb(122, 220, 180) 0%,
          rgb(0, 208, 130) 100%
        );
        --wp--preset--gradient--luminous-vivid-amber-to-luminous-vivid-orange: linear-gradient(
          135deg,
          rgba(252, 185, 0, 1) 0%,
          rgba(255, 105, 0, 1) 100%
        );
        --wp--preset--gradient--luminous-vivid-orange-to-vivid-red: linear-gradient(
          135deg,
          rgba(255, 105, 0, 1) 0%,
          rgb(207, 46, 46) 100%
        );
        --wp--preset--gradient--very-light-gray-to-cyan-bluish-gray: linear-gradient(
          135deg,
          rgb(238, 238, 238) 0%,
          rgb(169, 184, 195) 100%
        );
        --wp--preset--gradient--cool-to-warm-spectrum: linear-gradient(
          135deg,
          rgb(74, 234, 220) 0%,
          rgb(151, 120, 209) 20%,
          rgb(207, 42, 186) 40%,
          rgb(238, 44, 130) 60%,
          rgb(251, 105, 98) 80%,
          rgb(254, 248, 76) 100%
        );
        --wp--preset--gradient--blush-light-purple: linear-gradient(
          135deg,
          rgb(255, 206, 236) 0%,
          rgb(152, 150, 240) 100%
        );
        --wp--preset--gradient--blush-bordeaux: linear-gradient(
          135deg,
          rgb(254, 205, 165) 0%,
          rgb(254, 45, 45) 50%,
          rgb(107, 0, 62) 100%
        );
        --wp--preset--gradient--luminous-dusk: linear-gradient(
          135deg,
          rgb(255, 203, 112) 0%,
          rgb(199, 81, 192) 50%,
          rgb(65, 88, 208) 100%
        );
        --wp--preset--gradient--pale-ocean: linear-gradient(
          135deg,
          rgb(255, 245, 203) 0%,
          rgb(182, 227, 212) 50%,
          rgb(51, 167, 181) 100%
        );
        --wp--preset--gradient--electric-grass: linear-gradient(
          135deg,
          rgb(202, 248, 128) 0%,
          rgb(113, 206, 126) 100%
        );
        --wp--preset--gradient--midnight: linear-gradient(
          135deg,
          rgb(2, 3, 129) 0%,
          rgb(40, 116, 252) 100%
        );
        --wp--preset--font-size--small: 13px;
        --wp--preset--font-size--medium: 20px;
        --wp--preset--font-size--large: 36px;
        --wp--preset--font-size--x-large: 42px;
        --wp--preset--spacing--20: 0.44rem;
        --wp--preset--spacing--30: 0.67rem;
        --wp--preset--spacing--40: 1rem;
        --wp--preset--spacing--50: 1.5rem;
        --wp--preset--spacing--60: 2.25rem;
        --wp--preset--spacing--70: 3.38rem;
        --wp--preset--spacing--80: 5.06rem;
        --wp--preset--shadow--natural: 6px 6px 9px rgba(0, 0, 0, 0.2);
        --wp--preset--shadow--deep: 12px 12px 50px rgba(0, 0, 0, 0.4);
        --wp--preset--shadow--sharp: 6px 6px 0px rgba(0, 0, 0, 0.2);
        --wp--preset--shadow--outlined: 6px 6px 0px -3px rgba(255, 255, 255, 1),
          6px 6px rgba(0, 0, 0, 1);
        --wp--preset--shadow--crisp: 6px 6px 0px rgba(0, 0, 0, 1);
      }

      :where(.is-layout-flex) {
        gap: 0.5em;
      }

      :where(.is-layout-grid) {
        gap: 0.5em;
      }

      body .is-layout-flex {
        display: flex;
      }

      body .is-layout-flex {
        flex-wrap: wrap;
        align-items: center;
      }

      body .is-layout-flex > * {
        margin: 0;
      }

      body .is-layout-grid {
        display: grid;
      }

      body .is-layout-grid > * {
        margin: 0;
      }

      :where(.wp-block-columns.is-layout-flex) {
        gap: 2em;
      }

      :where(.wp-block-columns.is-layout-grid) {
        gap: 2em;
      }

      :where(.wp-block-post-template.is-layout-flex) {
        gap: 1.25em;
      }

      :where(.wp-block-post-template.is-layout-grid) {
        gap: 1.25em;
      }

      .has-black-color {
        color: var(--wp--preset--color--black) !important;
      }

      .has-cyan-bluish-gray-color {
        color: var(--wp--preset--color--cyan-bluish-gray) !important;
      }

      .has-white-color {
        color: var(--wp--preset--color--white) !important;
      }

      .has-pale-pink-color {
        color: var(--wp--preset--color--pale-pink) !important;
      }

      .has-vivid-red-color {
        color: var(--wp--preset--color--vivid-red) !important;
      }

      .has-luminous-vivid-orange-color {
        color: var(--wp--preset--color--luminous-vivid-orange) !important;
      }

      .has-luminous-vivid-amber-color {
        color: var(--wp--preset--color--luminous-vivid-amber) !important;
      }

      .has-light-green-cyan-color {
        color: var(--wp--preset--color--light-green-cyan) !important;
      }

      .has-vivid-green-cyan-color {
        color: var(--wp--preset--color--vivid-green-cyan) !important;
      }

      .has-pale-cyan-blue-color {
        color: var(--wp--preset--color--pale-cyan-blue) !important;
      }

      .has-vivid-cyan-blue-color {
        color: var(--wp--preset--color--vivid-cyan-blue) !important;
      }

      .has-vivid-purple-color {
        color: var(--wp--preset--color--vivid-purple) !important;
      }

      .has-black-background-color {
        background-color: var(--wp--preset--color--black) !important;
      }

      .has-cyan-bluish-gray-background-color {
        background-color: var(--wp--preset--color--cyan-bluish-gray) !important;
      }

      .has-white-background-color {
        background-color: var(--wp--preset--color--white) !important;
      }

      .has-pale-pink-background-color {
        background-color: var(--wp--preset--color--pale-pink) !important;
      }

      .has-vivid-red-background-color {
        background-color: var(--wp--preset--color--vivid-red) !important;
      }

      .has-luminous-vivid-orange-background-color {
        background-color: var(
          --wp--preset--color--luminous-vivid-orange
        ) !important;
      }

      .has-luminous-vivid-amber-background-color {
        background-color: var(
          --wp--preset--color--luminous-vivid-amber
        ) !important;
      }

      .has-light-green-cyan-background-color {
        background-color: var(--wp--preset--color--light-green-cyan) !important;
      }

      .has-vivid-green-cyan-background-color {
        background-color: var(--wp--preset--color--vivid-green-cyan) !important;
      }

      .has-pale-cyan-blue-background-color {
        background-color: var(--wp--preset--color--pale-cyan-blue) !important;
      }

      .has-vivid-cyan-blue-background-color {
        background-color: var(--wp--preset--color--vivid-cyan-blue) !important;
      }

      .has-vivid-purple-background-color {
        background-color: var(--wp--preset--color--vivid-purple) !important;
      }

      .has-black-border-color {
        border-color: var(--wp--preset--color--black) !important;
      }

      .has-cyan-bluish-gray-border-color {
        border-color: var(--wp--preset--color--cyan-bluish-gray) !important;
      }

      .has-white-border-color {
        border-color: var(--wp--preset--color--white) !important;
      }

      .has-pale-pink-border-color {
        border-color: var(--wp--preset--color--pale-pink) !important;
      }

      .has-vivid-red-border-color {
        border-color: var(--wp--preset--color--vivid-red) !important;
      }

      .has-luminous-vivid-orange-border-color {
        border-color: var(
          --wp--preset--color--luminous-vivid-orange
        ) !important;
      }

      .has-luminous-vivid-amber-border-color {
        border-color: var(--wp--preset--color--luminous-vivid-amber) !important;
      }

      .has-light-green-cyan-border-color {
        border-color: var(--wp--preset--color--light-green-cyan) !important;
      }

      .has-vivid-green-cyan-border-color {
        border-color: var(--wp--preset--color--vivid-green-cyan) !important;
      }

      .has-pale-cyan-blue-border-color {
        border-color: var(--wp--preset--color--pale-cyan-blue) !important;
      }

      .has-vivid-cyan-blue-border-color {
        border-color: var(--wp--preset--color--vivid-cyan-blue) !important;
      }

      .has-vivid-purple-border-color {
        border-color: var(--wp--preset--color--vivid-purple) !important;
      }

      .has-vivid-cyan-blue-to-vivid-purple-gradient-background {
        background: var(
          --wp--preset--gradient--vivid-cyan-blue-to-vivid-purple
        ) !important;
      }

      .has-light-green-cyan-to-vivid-green-cyan-gradient-background {
        background: var(
          --wp--preset--gradient--light-green-cyan-to-vivid-green-cyan
        ) !important;
      }

      .has-luminous-vivid-amber-to-luminous-vivid-orange-gradient-background {
        background: var(
          --wp--preset--gradient--luminous-vivid-amber-to-luminous-vivid-orange
        ) !important;
      }

      .has-luminous-vivid-orange-to-vivid-red-gradient-background {
        background: var(
          --wp--preset--gradient--luminous-vivid-orange-to-vivid-red
        ) !important;
      }

      .has-very-light-gray-to-cyan-bluish-gray-gradient-background {
        background: var(
          --wp--preset--gradient--very-light-gray-to-cyan-bluish-gray
        ) !important;
      }

      .has-cool-to-warm-spectrum-gradient-background {
        background: var(
          --wp--preset--gradient--cool-to-warm-spectrum
        ) !important;
      }

      .has-blush-light-purple-gradient-background {
        background: var(--wp--preset--gradient--blush-light-purple) !important;
      }

      .has-blush-bordeaux-gradient-background {
        background: var(--wp--preset--gradient--blush-bordeaux) !important;
      }

      .has-luminous-dusk-gradient-background {
        background: var(--wp--preset--gradient--luminous-dusk) !important;
      }

      .has-pale-ocean-gradient-background {
        background: var(--wp--preset--gradient--pale-ocean) !important;
      }

      .has-electric-grass-gradient-background {
        background: var(--wp--preset--gradient--electric-grass) !important;
      }

      .has-midnight-gradient-background {
        background: var(--wp--preset--gradient--midnight) !important;
      }

      .has-small-font-size {
        font-size: var(--wp--preset--font-size--small) !important;
      }

      .has-medium-font-size {
        font-size: var(--wp--preset--font-size--medium) !important;
      }

      .has-large-font-size {
        font-size: var(--wp--preset--font-size--large) !important;
      }

      .has-x-large-font-size {
        font-size: var(--wp--preset--font-size--x-large) !important;
      }

      .wp-block-navigation a:where(:not(.wp-element-button)) {
        color: inherit;
      }

      :where(.wp-block-post-template.is-layout-flex) {
        gap: 1.25em;
      }

      :where(.wp-block-post-template.is-layout-grid) {
        gap: 1.25em;
      }

      :where(.wp-block-columns.is-layout-flex) {
        gap: 2em;
      }

      :where(.wp-block-columns.is-layout-grid) {
        gap: 2em;
      }

      .wp-block-pullquote {
        font-size: 1.5em;
        line-height: 1.6;
      }
    </style>
    <link
      rel="stylesheet"
      id="hello-elementor-css"
      href="https://michisolana.org/wp-content/themes/hello-elementor/style.min.css?ver=3.0.1"
      media="all"
    />
    <link
      rel="stylesheet"
      id="hello-elementor-theme-style-css"
      href="https://michisolana.org/wp-content/themes/hello-elementor/theme.min.css?ver=3.0.1"
      media="all"
    />
    <link
      rel="stylesheet"
      id="hello-elementor-header-footer-css"
      href="https://michisolana.org/wp-content/themes/hello-elementor/header-footer.min.css?ver=3.0.1"
      media="all"
    />
    <link
      rel="stylesheet"
      id="elementor-frontend-css"
      href="https://michisolana.org/wp-content/plugins/elementor/assets/css/frontend-lite.min.css?ver=3.20.4"
      media="all"
    />
    <link
      rel="stylesheet"
      id="elementor-post-8-css"
      href="https://michisolana.org/wp-content/uploads/elementor/css/post-8.css?ver=1714259760"
      media="all"
    />
    <link
      rel="stylesheet"
      id="swiper-css"
      href="https://michisolana.org/wp-content/plugins/elementor/assets/lib/swiper/v8/css/swiper.min.css?ver=8.4.5"
      media="all"
    />
    <link
      rel="stylesheet"
      id="elementor-pro-css"
      href="https://michisolana.org/wp-content/plugins/elementor-pro/assets/css/frontend-lite.min.css?ver=3.19.2"
      media="all"
    />
    <link
      rel="stylesheet"
      id="elementor-global-css"
      href="https://michisolana.org/wp-content/uploads/elementor/css/global.css?ver=1714259760"
      media="all"
    />
    <link
      rel="stylesheet"
      id="elementor-post-794-css"
      href="https://michisolana.org/wp-content/uploads/elementor/css/post-794.css?ver=1714260379"
      media="all"
    />
    <link
      rel="stylesheet"
      id="google-fonts-1-css"
      href="https://fonts.googleapis.com/css?family=Roboto%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic%7CRoboto+Slab%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic%7CBitter%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic&#038;display=swap&#038;ver=6.5.3"
      media="all"
    />
    <link rel="preconnect" href="https://fonts.gstatic.com/" crossorigin />
    <link rel="https://api.w.org/" href="https://michisolana.org/wp-json/" />
    <link
      rel="alternate"
      type="application/json"
      href="https://michisolana.org/wp-json/wp/v2/pages/794"
    />
    <link
      rel="EditURI"
      type="application/rsd+xml"
      title="RSD"
      href="https://michisolana.org/xmlrpc.php?rsd"
    />
    <meta name="generator" content="WordPress 6.5.3" />
    <link rel="canonical" href="https://michisolana.org/michi-meme-maker/" />
    <link rel="shortlink" href="https://michisolana.org/?p=794" />
    <link
      rel="alternate"
      type="application/json+oembed"
      href="https://michisolana.org/wp-json/oembed/1.0/embed?url=https%3A%2F%2Fmichisolana.org%2Fmichi-meme-maker%2F"
    />
    <link
      rel="alternate"
      type="text/xml+oembed"
      href="https://michisolana.org/wp-json/oembed/1.0/embed?url=https%3A%2F%2Fmichisolana.org%2Fmichi-meme-maker%2F&#038;format=xml"
    />
    <meta
      name="generator"
      content="Elementor 3.20.4; features: e_optimized_assets_loading, e_optimized_css_loading, e_font_icon_svg, additional_custom_breakpoints, block_editor_assets_optimize, e_image_loading_optimization; settings: css_print_method-external, google_font-enabled, font_display-swap"
    />
    <link
      rel="icon"
      href="https://michisolana.org/wp-content/uploads/2024/04/LOGO-sm-150x150.png"
      sizes="32x32"
    />
    <link
      rel="icon"
      href="./logo.jpg"
      sizes="192x192"
    />
    <link
      rel="apple-touch-icon"
      href="./logo.jpg"
    />
    <meta
      name="msapplication-TileImage"
      content="./logo.jpg"
    />
    <meta
      name="viewport"
      content="width=device-width, initial-scale=1.0, viewport-fit=cover"
    />
  </head>
  <body
    class="page-template page-template-elementor_canvas page page-id-794 wp-custom-logo elementor-default elementor-template-canvas elementor-kit-8 elementor-page elementor-page-794"
  >
    <div
      data-elementor-type="wp-page"
      data-elementor-id="794"
      class="elementor elementor-794"
      data-elementor-post-type="page"
    >
      <div
        class="elementor-element elementor-element-34b7fde e-con-full e-flex e-con e-parent"
        data-id="34b7fde"
        data-element_type="container"
        data-core-v316-plus="true"
      >
        <div
          class="elementor-element elementor-element-f981719 e-flex e-con-boxed e-con e-child"
          data-id="f981719"
          data-element_type="container"
        >
          <div class="e-con-inner">
            <div
              class="elementor-element elementor-element-ac1bacc elementor-widget elementor-widget-image"
              data-id="ac1bacc"
              data-element_type="widget"
              data-widget_type="image.default"
            >
              <div class="elementor-widget-container">
                <style>
                  /*! elementor - v3.20.0 - 10-04-2024 */
                  .elementor-widget-image {
                    text-align: center;
                  }

                  .elementor-widget-image a {
                    display: inline-block;
                  }

                  .elementor-widget-image a img[src$=".svg"] {
                    width: 48px;
                  }

                  .elementor-widget-image img {
                    vertical-align: middle;
                    display: inline-block;
                  }
                </style>
                <img
                  decoding="async"
                  width="200"
                  height="200"
                  src="./logo.jpg"
                  class="attachment-large size-large wp-image-617"
                  alt=""
                  srcset="
                    ./logo.jpg         200w,
                    https://michisolana.org/wp-content/uploads/2024/04/LOGO-sm-150x150.png 150w
                  "
                  sizes="(max-width: 200px) 100vw, 200px"
                />
              </div>
            </div>
            <div
              class="elementor-element elementor-element-f4cf614 elementor-widget elementor-widget-heading"
              data-id="f4cf614"
              data-element_type="widget"
              data-widget_type="heading.default"
            >
              <div class="elementor-widget-container">
                <style>
                  /*! elementor - v3.20.0 - 10-04-2024 */
                  .elementor-heading-title {
                    padding: 0;
                    margin: 0;
                    line-height: 1;
                  }

                  .elementor-widget-heading
                    .elementor-heading-title[class*="elementor-size-"]
                    > a {
                    color: inherit;
                    font-size: inherit;
                    line-height: inherit;
                  }

                  .elementor-widget-heading
                    .elementor-heading-title.elementor-size-small {
                    font-size: 15px;
                  }

                  .elementor-widget-heading
                    .elementor-heading-title.elementor-size-medium {
                    font-size: 19px;
                  }

                  .elementor-widget-heading
                    .elementor-heading-title.elementor-size-large {
                    font-size: 29px;
                  }

                  .elementor-widget-heading
                    .elementor-heading-title.elementor-size-xl {
                    font-size: 39px;
                  }

                  .elementor-widget-heading
                    .elementor-heading-title.elementor-size-xxl {
                    font-size: 59px;
                  }
                </style>
                <h2 class="elementor-heading-title elementor-size-default">
                  grEGG
                </h2>
              </div>
            </div>
          </div>
        </div>
        <div
          class="elementor-element elementor-element-207868f elementor-widget__width-initial premium-floating-effects-yes elementor-invisible elementor-widget elementor-widget-heading"
          data-id="207868f"
          data-element_type="widget"
          data-settings='{"_animation":"bounceIn","premium_fe_translate_switcher":"yes","premium_fe_Xtranslate":{"unit":"px","size":"","sizes":{"from":3,"to":9}},"premium_fe_Xtranslate_tablet":{"unit":"px","size":0,"sizes":[]},"premium_fe_Ytranslate":{"unit":"px","size":"","sizes":{"from":-12,"to":22}},"premium_fe_Ytranslate_tablet":{"unit":"px","size":0,"sizes":[]},"premium_fe_trans_duration":{"unit":"px","size":3000,"sizes":[]},"premium_fe_scale_switcher":"yes","premium_fe_Xscale":{"unit":"px","size":"","sizes":{"from":1,"to":1.1}},"premium_fe_Yscale":{"unit":"px","size":"","sizes":{"from":1,"to":1.1}},"premium_fe_Xtranslate_mobile":{"unit":"px","size":"","sizes":[]},"premium_fe_Ytranslate_mobile":{"unit":"px","size":"","sizes":[]},"premium_fe_trans_delay":{"unit":"px","size":"","sizes":[]},"premium_fe_Xscale_tablet":{"unit":"px","size":"","sizes":[]},"premium_fe_Xscale_mobile":{"unit":"px","size":"","sizes":[]},"premium_fe_Yscale_tablet":{"unit":"px","size":"","sizes":[]},"premium_fe_Yscale_mobile":{"unit":"px","size":"","sizes":[]},"premium_fe_scale_duration":{"unit":"px","size":1000,"sizes":[]},"premium_fe_scale_delay":{"unit":"px","size":"","sizes":[]},"premium_fe_direction":"alternate","premium_fe_loop":"default","premium_fe_easing":"easeInOutSine"}'
          data-widget_type="heading.default"
        >
          <div class="elementor-widget-container">
            <h2 class="elementor-heading-title elementor-size-default">
              grEGG Meme Maker
            </h2>
          </div>
        </div>
      </div>
      <div
        class="elementor-element elementor-element-4cb7354 e-flex e-con-boxed e-con e-parent"
        data-id="4cb7354"
        data-element_type="container"
        data-core-v316-plus="true"
      >
        <div class="e-con-inner">
          <div
            class="elementor-element elementor-element-0826236 elementor-widget elementor-widget-html"
            data-id="0826236"
            data-element_type="widget"
            data-widget_type="html.default"
          >
            <div class="elementor-widget-container">
              <!DOCTYPE html>
              <html lang="en">
                <head>
                  <meta charset="UTF-8" />
                  <meta
                    name="viewport"
                    content="width=device-width, initial-scale=1.0"
                  />
                  <title>Meme Generator</title>
                  <style>
                    body,
                    html {
                      padding: 0;
                      margin: 0;
                      min-height: 100vh;
                      background-color: #fbeccf;
                    }

                    #container {
                      display: flex;
                      justify-content: center;
                      align-items: center;
                      padding: 10px;
                    }

                    iframe {
                      width: 100%;
                      border: none;
                    }
                  </style>
                </head>
                <body>
                  <div id="container">
                    <iframe
                      id="meme-generator"
                      src="https://michimaker.vercel.app/"
                      frameborder="0"
                      scrolling="no"
                    ></iframe>
                  </div>
                  <script>
                    window.addEventListener("message", function (event) {
                      if (event.origin !== "https://michimaker.vercel.app") {
                        console.log(
                          "Message from untrusted origin:",
                          event.origin
                        );
                        return;
                        // Always verify the origin, it should match your iframe's origin
                      }

                      if (event.data.frameId === "meme-generator") {
                        var iframe = document.getElementById("meme-generator");
                        if (iframe) {
                          iframe.style.height = event.data.frameHeight + "px";
                        }
                      }
                    });
                  </script>
                </body>
              </html>
            </div>
          </div>
        </div>
      </div>
    </div>
    <link
      rel="stylesheet"
      id="e-animations-css"
      href="https://michisolana.org/wp-content/plugins/elementor/assets/lib/animations/animations.min.css?ver=3.20.4"
      media="all"
    />
    <script
      src="https://michisolana.org/wp-content/themes/hello-elementor/assets/js/hello-frontend.min.js?ver=3.0.1"
      id="hello-theme-frontend-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/jquery/jquery.min.js?ver=3.7.1"
      id="jquery-core-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/jquery/jquery-migrate.min.js?ver=3.4.1"
      id="jquery-migrate-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/premium-addons-for-elementor/assets/frontend/min-js/premium-wrapper-link.min.js?ver=4.10.28"
      id="pa-wrapper-link-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor/assets/lib/waypoints/waypoints.min.js?ver=4.0.2"
      id="elementor-waypoints-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/premium-addons-for-elementor/assets/frontend/min-js/anime.min.js?ver=4.10.28"
      id="pa-anime-js"
    ></script>
    <script id="pa-feffects-js-extra">
      var PremiumFESettings = {
        papro_installed: "",
      };
    </script>
    <script
      src="https://michisolana.org/wp-content/plugins/premium-addons-for-elementor/assets/frontend/min-js/premium-floating-effects.min.js?ver=4.10.28"
      id="pa-feffects-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor-pro/assets/js/webpack-pro.runtime.min.js?ver=3.19.2"
      id="elementor-pro-webpack-runtime-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor/assets/js/webpack.runtime.min.js?ver=3.20.4"
      id="elementor-webpack-runtime-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor/assets/js/frontend-modules.min.js?ver=3.20.4"
      id="elementor-frontend-modules-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/dist/vendor/wp-polyfill-inert.min.js?ver=3.1.2"
      id="wp-polyfill-inert-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/dist/vendor/regenerator-runtime.min.js?ver=0.14.0"
      id="regenerator-runtime-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/dist/vendor/wp-polyfill.min.js?ver=3.15.0"
      id="wp-polyfill-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/dist/hooks.min.js?ver=2810c76e705dd1a53b18"
      id="wp-hooks-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/dist/i18n.min.js?ver=5e580eb46a90c2b997e6"
      id="wp-i18n-js"
    ></script>
    <script id="wp-i18n-js-after">
      wp.i18n.setLocaleData({
        "text direction\u0004ltr": ["ltr"],
      });
    </script>
    <script id="elementor-pro-frontend-js-before">
      var ElementorProFrontendConfig = {
        ajaxurl: "https:\/\/michisolana.org\/wp-admin\/admin-ajax.php",
        nonce: "5df2878243",
        urls: {
          assets:
            "https:\/\/michisolana.org\/wp-content\/plugins\/elementor-pro\/assets\/",
          rest: "https:\/\/michisolana.org\/wp-json\/",
        },
        shareButtonsNetworks: {
          facebook: {
            title: "Facebook",
            has_counter: true,
          },
          twitter: {
            title: "Twitter",
          },
          linkedin: {
            title: "LinkedIn",
            has_counter: true,
          },
          pinterest: {
            title: "Pinterest",
            has_counter: true,
          },
          reddit: {
            title: "Reddit",
            has_counter: true,
          },
          vk: {
            title: "VK",
            has_counter: true,
          },
          odnoklassniki: {
            title: "OK",
            has_counter: true,
          },
          tumblr: {
            title: "Tumblr",
          },
          digg: {
            title: "Digg",
          },
          skype: {
            title: "Skype",
          },
          stumbleupon: {
            title: "StumbleUpon",
            has_counter: true,
          },
          mix: {
            title: "Mix",
          },
          telegram: {
            title: "Telegram",
          },
          pocket: {
            title: "Pocket",
            has_counter: true,
          },
          xing: {
            title: "XING",
            has_counter: true,
          },
          whatsapp: {
            title: "WhatsApp",
          },
          email: {
            title: "Email",
          },
          print: {
            title: "Print",
          },
        },
        facebook_sdk: {
          lang: "en_US",
          app_id: "",
        },
        lottie: {
          defaultAnimationUrl:
            "https:\/\/michisolana.org\/wp-content\/plugins\/elementor-pro\/modules\/lottie\/assets\/animations\/default.json",
        },
      };
    </script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor-pro/assets/js/frontend.min.js?ver=3.19.2"
      id="elementor-pro-frontend-js"
    ></script>
    <script
      src="https://michisolana.org/wp-includes/js/jquery/ui/core.min.js?ver=1.13.2"
      id="jquery-ui-core-js"
    ></script>
    <script id="elementor-frontend-js-before">
      var elementorFrontendConfig = {
        environmentMode: {
          edit: false,
          wpPreview: false,
          isScriptDebug: false,
        },
        i18n: {
          shareOnFacebook: "Share on Facebook",
          shareOnTwitter: "Share on Twitter",
          pinIt: "Pin it",
          download: "Download",
          downloadImage: "Download image",
          fullscreen: "Fullscreen",
          zoom: "Zoom",
          share: "Share",
          playVideo: "Play Video",
          previous: "Previous",
          next: "Next",
          close: "Close",
          a11yCarouselWrapperAriaLabel:
            "Carousel | Horizontal scrolling: Arrow Left & Right",
          a11yCarouselPrevSlideMessage: "Previous slide",
          a11yCarouselNextSlideMessage: "Next slide",
          a11yCarouselFirstSlideMessage: "This is the first slide",
          a11yCarouselLastSlideMessage: "This is the last slide",
          a11yCarouselPaginationBulletMessage: "Go to slide",
        },
        is_rtl: false,
        breakpoints: {
          xs: 0,
          sm: 480,
          md: 768,
          lg: 1025,
          xl: 1440,
          xxl: 1600,
        },
        responsive: {
          breakpoints: {
            mobile: {
              label: "Mobile Portrait",
              value: 767,
              default_value: 767,
              direction: "max",
              is_enabled: true,
            },
            mobile_extra: {
              label: "Mobile Landscape",
              value: 880,
              default_value: 880,
              direction: "max",
              is_enabled: false,
            },
            tablet: {
              label: "Tablet Portrait",
              value: 1024,
              default_value: 1024,
              direction: "max",
              is_enabled: true,
            },
            tablet_extra: {
              label: "Tablet Landscape",
              value: 1200,
              default_value: 1200,
              direction: "max",
              is_enabled: false,
            },
            laptop: {
              label: "Laptop",
              value: 1366,
              default_value: 1366,
              direction: "max",
              is_enabled: false,
            },
            widescreen: {
              label: "Widescreen",
              value: 2400,
              default_value: 2400,
              direction: "min",
              is_enabled: false,
            },
          },
        },
        version: "3.20.4",
        is_static: false,
        experimentalFeatures: {
          e_optimized_assets_loading: true,
          e_optimized_css_loading: true,
          e_font_icon_svg: true,
          additional_custom_breakpoints: true,
          container: true,
          e_swiper_latest: true,
          container_grid: true,
          theme_builder_v2: true,
          "hello-theme-header-footer": true,
          block_editor_assets_optimize: true,
          "ai-layout": true,
          "landing-pages": true,
          e_image_loading_optimization: true,
          "page-transitions": true,
          notes: true,
          "form-submissions": true,
          e_scroll_snap: true,
        },
        urls: {
          assets:
            "https:\/\/michisolana.org\/wp-content\/plugins\/elementor\/assets\/",
        },
        swiperClass: "swiper",
        settings: {
          page: [],
          editorPreferences: [],
        },
        kit: {
          active_breakpoints: ["viewport_mobile", "viewport_tablet"],
          global_image_lightbox: "yes",
          lightbox_enable_counter: "yes",
          lightbox_enable_fullscreen: "yes",
          lightbox_enable_zoom: "yes",
          lightbox_enable_share: "yes",
          lightbox_title_src: "title",
          lightbox_description_src: "description",
          hello_header_logo_type: "logo",
          hello_footer_logo_type: "logo",
        },
        post: {
          id: 794,
          title: "Michi%20Meme%20Maker%20%E2%80%93%20%24michi",
          excerpt: "",
          featuredImage: false,
        },
      };
    </script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor/assets/js/frontend.min.js?ver=3.20.4"
      id="elementor-frontend-js"
    ></script>
    <script
      src="https://michisolana.org/wp-content/plugins/elementor-pro/assets/js/elements-handlers.min.js?ver=3.19.2"
      id="pro-elements-handlers-js"
    ></script>
  </body>
</html>
<!-- Page cached by LiteSpeed Cache 6.1 on 2024-05-28 11:05:41 -->
